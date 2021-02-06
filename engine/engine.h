#include "process.h"

using namespace std;


void proc(int len, char sc[]) {
  
  //ncurses initialization
  init();
  Window main(5,5,45,2);

  Window t(0,0,20,2);

  Window src(7,7,50,50);

  //native out for bf
	
  title(t);
	
  vector<int> coords(2,0);
  vector<int> my;
  vector<int> mx;

  for(int n=0 ;n<len;n++) {
    switch(sc[n]) {
      
        case '\n':
            coords[1]=0;
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

 iterate(len,sc,my,mx,main,src); 


end();
}
