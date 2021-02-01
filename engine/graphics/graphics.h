#include <bits/stdc++.h>
#include <curses.h>

#include "window.h"



using namespace std;

void init() {
	
    initscr();
    noecho();
	curs_set(0);
    
    assume_default_colors(-1,-1);
    start_color();
    init_pair(1,COLOR_GREEN,-1);
	
    

}

void end() {
	endwin();
}

//frame renderer


void title(Window w) {
        w.print("bf-arch v 1.0.0",1,1);
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
