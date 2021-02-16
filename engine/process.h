#include <stack>
#include <iostream>

#include "graphics/graphics.h"


using namespace std;

void iterate(int size,char sc[],vector<int> my,vector<int> mx, Window win, Window src) {
    vector<uint8_t> mem(1000,0);
    stack<int> st;
    int nest = 0;
    int point = 0;
    int nav = 0;
    int line = 1;
    char out = 0;
    int row = 1;
    Window wout(90,9,75,40);
    box(wout.win,0,0);
    wout.refresh();
   

for(int n = 0;n<size;n++) {

    instruct(my,mx,sc,n,src);


    switch(nest) {
    
        
        default:
            switch(sc[n]) {
                case '[':
                    nest++;
                case ']':
                    nest--;
                    break;

                default:
                    break;
            }
            break;
        
        
        case 0:  
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
                        if (out == 10) {
                            line =1;
                            row++;
                        }else {
                            wout.print(out,row,line);
                            line++;  
                            wout.refresh();
                            break;
                        }   

                case '[':
                        if ( mem[point] == 0) {
                            nest = 1;

                        }else {
                            st.push(n);
                            }
                        break;
                case ']':
                        if ( mem[point] != 0) {
                            n = st.top();
                        }else {
                            st.pop();
                        }
                        break;	
            }
            break;
        }
    render(mem,point,win);	
  }
 }

