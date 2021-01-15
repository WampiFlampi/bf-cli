#include <bits/stdc++.h>
#include "src/engine.h"


using namespace std;


int main() {
  
  //program instructions
  string init = ">++++++++[<+++++++++>-]<.>++++[<+++++++>-]<+.+++++++..+++.>>++++++[<+++++++>-]<++.------------.>++++++[<+++++++++>-]<+.<.+++.------.--------.>>>++++[<++++++++>-]<+." ;
  int len = init.length();

  
  
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

  

  //iterates through input

  iterate(bmap, len, source);

  
  cout << endl;
  return 0;
  
}
