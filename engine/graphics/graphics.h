#include <unistd.h>

#include "window.h"



using namespace std;

bool base = true;

int nmem;

int speed = 70;

bool debug = false;

void init() {
	
    initscr();
    noecho();
	curs_set(0);
    
    assume_default_colors(-1,-1);
    start_color();
    init_pair(0,-1,-1);
    init_pair(1,COLOR_RED,-1);	
    

}

void end() {
	endwin();
}

//frame renderer


void title(Window w) {
        
        box(w.win,0,0);
        w.print("bf-arch v 1.1.0",1,1);
        w.refresh();


}


void instruct(vector<int> my,vector<int> mx,char sc[],int n, Window w) {
     
    if(sc[n] == '\n') {
        
    }else {
        switch(base) {
            case true:
                w.color(1);
                w.print(sc[n],my[n],mx[n]);
                nmem = n;
                base = false;
                break;

            default:
                w.color(1);
                w.print(sc[n],my[n],mx[n]);
                w.color(0);
                w.print(sc[nmem],my[nmem],mx[nmem]);
                nmem = n;
                break;
       }
    } 

    

    w.refresh();

}

void render(vector<int> mem, int pnt, Window  w) {

	w.erase();	
	w.print("^",1,pnt*4);

	for(int i = 0;i<mem.size();i++) {
			w.print(mem[i],0,i*4);

	}
    
	int ch = wgetch(w.win);
    

    switch(debug) {
        case true:
            switch(ch) {
                case 113:
                    nodelay(w.win,true);
                    debug = false;
                    break;
                default:
                    break;

            }
            break;
       
        default:
            switch(ch) {
                case 100:
                    nodelay(w.win,false);
                    debug = true;
                    break;
                
                case ERR:
                    usleep(speed*1000);
                    break;

            }
            break;
    }

    w.refresh();
} 
