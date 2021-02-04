#include <bits/stdc++.h>
#include <curses.h>

#include "window.h"



using namespace std;

vector<int> coords(5,0);

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
        w.print("bf-arch v 1.0.0",1,1);
		w.refresh();

	}
void instruct(char sc[],int n, Window w) {
     
    switch(sc[n]) {
        case '\n':
            coords[0]++;
            coords[1]=0;
            break;
        
        default:
            if (n==0) {
                w.color(1);
                w.print(sc[n],coords[0],coords[1]);
                coords[4] = coords[1];
                coords[3] = coords[0];
                coords[1]++;
            } 
            else {           
                w.color(1);
                w.print(sc[n],coords[0],coords[1]);
                w.color(0);
                w.print(sc[coords[5]],coords[3],coords[4]);
                coords[4] = coords[1];
                coords[3] = coords[0];
                coords[5] = n;
                coords[1]++;
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
	w.refresh();

}
