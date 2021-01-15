#include <string>
#include <vector>

#include "window.hpp"

using namespace std;


Window::Window(int x,int y,int w,int h)
{
	
	this->win = newwin(h,w,y,x);
	refresh();

}

			
void Window::print(int in,int y,int x) {
		
		wmove(this->win,y,x);
		wprintw(this->win,"%d",in);


}

void Window::print(char *in,int y,int x) {
		mvwprintw(this->win,y,x,in);
}

void Window::refresh() {
		wrefresh(this->win);

}
void Window::erase() {
		werase(this->win);

}

						
