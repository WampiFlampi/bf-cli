#include <iostream>
#include <bits/stdc++.h>
#include <unistd.h>

#include "graphics/graphics.h"


using namespace std;


// memory allocated to bf
vector<int> mem(10,0);
//pointer for mem
int point = 0;
//stores bmap location
int nav = 0;


//controls speed of animation
int rr = 40*1000;



void iterate(int len, char sc[]) {
  
  //ncurses initialization
  init();
  Window main(5,5,45,2);

  Window t(0,0,20,2);

  //native out for bf
  char out;
	
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
  
    //sc[] is the bf instructions
    switch(sc[n]) {
			
      //defining languauge rules
      case '>':
        point++;
        break;
      case '<':
        point--;
        break;
      case '+':
        mem[point]++;
        break;
      case '-':
        mem[point]--;
        break;
      case '.':
        out = mem[point];
        cout << out;  
        break;
    
      //altering the n value which corresponds to location in the program instructions
      //loop behaviour
      case '[':
        if ( mem[point] == 0) {
          n = bmap[nav+1];
          nav = nav + 2;
        }
        break;
      case ']':
        if ( mem[point]>0) {
          n = bmap[nav]-1;
        }else {
          nav = nav+2;
        }
		break;	
      }
	display(mem,point,main);
    usleep(rr);	
  }
  end();
}
