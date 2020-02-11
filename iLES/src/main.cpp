#include <iostream>
#include <string>
#include "field.h"
using namespace std;

int main(int argc,char** argv)
{
  // Get Project Directory
  string dir;    
  if (argc == 2)
    dir = string(argv[1]);
  else
    dir = "";
  
  // Display Runtime Info
  cout << "\n\nCFD -- Implicit Large Eddy Simulation\n\n";
  cout << dir << endl << endl; 
  
  return 0;
}