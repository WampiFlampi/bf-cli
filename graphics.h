#include <bits/stdc++.h>
#include <curses.h>




using namespace std;

void init() {
		initscr();
		noecho();
}

void end() {
	endwin();
}

void display(vector<int> mem, int pnt) {

  erase();
  move(10,pnt*4);
  printw("^");	

  for (int i = 0;i < mem.size();i++) {
		 
		  move(9,4*i);
		  printw("%d",mem[i]);
		  
  
		}
  refresh();
  
}
