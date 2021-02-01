#include <bits/stdc++.h>

#include "graphics/graphics.h"


using namespace std;

vector<int> mem(10,0);
vector<int> coords(5,0);
int point = 0;
int nav = 0;
int n = 0;
char out;

void iterate(char sc[],vector<int> bmap, Window win, Window src) {
    


     switch(sc[n]) {
        case '\n':
            coords[0]++;
            coords[1]=0;
            break;
        
        default:
            if (n==0) {
                src.color(1);
                src.print(sc[n],coords[0],coords[1]);
                coords[4] = coords[1];
                coords[3] = coords[0];
                coords[1]++;
            } 
            else {           
                src.color(2);
                src.print(sc[n],coords[0],coords[1]);
                src.color(1);
                src.print(sc[coords[5]],coords[3],coords[4]);
                coords[4] = coords[1];
                coords[3] = coords[0];
                coords[5] = n;
                coords[1]++;
            }
       }
    src.refresh();

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

	render(mem,point,win);
    n++;	
  }
 

