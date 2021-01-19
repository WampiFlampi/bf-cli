#include <bits/stdc++.h>
#include <fstream>
#include "src/engine.h"


using namespace std;


int main(int argc,char *argv[]) {
  
  //program instructions
  ifstream input;
  
  input.open(argv[1],ifstream::in);
  
  //c++.com wildin
  filebuf* buffer = input.rdbuf();
  size_t size = buffer->pubseekoff (0,input.end,input.in);
  buffer->pubseekpos (0,input.in);

  char source[size];
  input.read(source,size);
  

  
  

  //iterates through input

  iterate(bmap, len, source);

  
  cout << endl;
  return 0;
  
}
