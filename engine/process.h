#include <bits/stdc++.h>
#include <unistd.h>

#include "graphics/graphics.h"


using namespace std;

vector<int> mem(10,0);
stack<int> st;

int point = 0;
int nav = 0;
int n = 0;
char out;
bool flag = false;

void iterate(int size,char sc[],vector<int> my,vector<int> mx, Window win, Window src) {
    

for(int n = 0;n<size;n++) {

    

    switch(flag) {
    
        
        case true:
            switch(sc[n]) {
                case ']':
                    flag = false;
                    break;

                default:
                    break;
            }
            break;
        
        
        default:  
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

                case '[':
                        if ( mem[point] == 0) {
                            flag = true;

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
    instruct(my,mx,sc,n,src);
	render(mem,point,win);
    usleep(70000);	
  }
 }

