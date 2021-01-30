#include <iostream>
#include <bits/stdc++.h>
#include <unistd.h>

#include "process.h"

using namespace std;


//controls speed of animation
int rr = 40*1000;



void proc(int len, char sc[]) {
  
  //ncurses initialization
  init();
  Window main(5,5,45,2);

  Window t(0,0,20,2);

  Window src(7,7,50,50);

  //native out for bf
	
  title(t);
	
  //map bracket location
  vector<int> bmap;

  for(int n=0 ;n<len;n++) {
    switch(sc[n]) {
      
      case '[':
        bmap.push_back(n);
        break;
      
      case ']':
        bmap.push_back(n);
        break;
      
      default:
        break;

  }
  }

 
  for(int n=0 ;n<len;n++) {
   
    iterate(sc,bmap,main,src);
    usleep(rr);  
  }

end();
}
