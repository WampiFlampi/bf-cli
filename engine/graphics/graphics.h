#include <bits/stdc++.h>
#include <curses.h>

#include "window.h"



using namespace std;

void init() {
	initscr();
	noecho();
	curs_set(0);
}

void end() {
	endwin();
}

//frame renderer


void title(Window w) {
		w.print("bf-arch v 1.0.0",1,1);
		w.refresh();

	}

void display(vector<int> mem, int pnt, Window  w, Window swin) {

	w.erase();	
	w.print("^",1,pnt*4);

    
    swin.print("eeeeeeeeeeeeeee",0,0);
    swin.refresh();

	for(int i = 0;i<mem.size();i++) {
			w.print(mem[i],0,i*4);

	}
	w.refresh();

}
