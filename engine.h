#include <iostream>
#include <bits/stdc++.h>
#include <unistd.h>

#include "graphics.h"

using namespace std;


// memory allocated to bf
vector<int> mem(10,0);
//pointer for mem
int point = 0;
//stores bmap location
int nav = 0;
char out;

int rr = 40*1000;

void iterate(vector<int> bmap,int len, char sc[]) {

  init();
   
  for(int n=0 ;n<len;n++) {
  

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
    display(mem,point);
	usleep(rr);	
  }
  end();
}
