#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main() {
  
  //program instructions
  string init = ">++++++++[<+++++++++>-]<.>++++[<+++++++>-]<+.+++++++..+++.>>++++++[<+++++++>-]<++.------------.>++++++[<+++++++++>-]<+.<.+++.------.--------.>>>++++[<++++++++>-]<+." ;
  int len = init.length();

  // memory allocated to bf
  vector<int> mem(10,0);
  
 //convert input to char array
  char source[len];
  strcpy(source ,init.c_str());
  

  //map bracket location
  vector<int> bmap;

  for(int n=0 ;n<len;n++) {
    switch(source[n]) {
      
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

  //pointer for mem
  int point = 0;

  //stores bmap location
  int nav = 0;
  
  char out;

  //iterates through input

  for(int n=0 ;n<len;n++) {
  
    switch(source[n]) {
      
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
       
      
  
      

    }   
  
  }

  
}
