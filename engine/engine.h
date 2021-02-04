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
	
  //map bracket location
  vector<int> coords(2,0);

  for(int n=0 ;n<len;n++) {
    switch(sc[n]) {
      
        case '<':
            src.print("<",coords[0],coords[1]);
            coords[1]++;
            break;
        case '>':
            src.print(">",coords[0],coords[1]);
            coords[1]++;
            break;
        
        case '+':
            src.print("+",coords[0],coords[1]);
            coords[1]++;
             break;

        case '-':
            src.print("-",coords[0],coords[1]);
            coords[1]++;
            break;
        
        case '.':
            src.print(".",coords[0],coords[1]);
            coords[1]++;
            break;

        
        case '[':
            src.print("[",coords[0],coords[1]);
            coords[1]++;
            break;
      
        case ']':
            src.print("]",coords[0],coords[1]);
            coords[1]++;
            break;
      
        case '\n':
            coords[1]=0;
            coords[0]++;
            break;

        default:
            break;

  }
  }
  src.refresh();

 iterate(len,sc,main,src); 


end();
}
