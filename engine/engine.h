#include "process.h"

using namespace std;


void proc(int len, char sc[]) {
  
  //ncurses initialization
  init();
  Window main(20,5,80,2);

  Window t(0,0,20,3);
  
  Window src(6,9,80,40);
  box(src.win,0,0);

	
  title(t);
	
  vector<int> coords(2,1);
  vector<int> my;
  vector<int> mx;

  for(int n=0 ;n<len;n++) {
    switch(sc[n]) {
      
        case '\n':
            my.push_back(0);
            mx.push_back(0);
            coords[1]=1;
            coords[0]++;
            break;

        default:
            src.print(sc[n],coords[0],coords[1]);
            my.push_back(coords[0]);
            mx.push_back(coords[1]);
            coords[1]++;
            break;

    }
  }

  src.refresh();
 nodelay(main.win,true);
 iterate(len,sc,my,mx,main,src); 


end();
}
