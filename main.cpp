#include <bits/stdc++.h>
#include <fstream>
#include "engine/engine.h"


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
  

  
  

  //engine process

  proc(size, source);

  
  cout << endl;
  cout << size;
  return 0;
  
}
