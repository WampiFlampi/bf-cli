
#include <string>
#include <vector>

using namespace std;


class Window 
{
public:
	
	Window(int x, int y, int w, int h);
	
	void print(int in,int y,int x);
	
	void print(char in,int y,int x);
    
    void print(const char*in,int y,int x);
	
	void refresh();
	
	void erase();

    void color(int sel);
		

	WINDOW* win;




};
