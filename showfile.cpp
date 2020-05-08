// showfile.cpp
// show the record.txt data to commond line
#include <iostream>
#include <fstream>
#include "showfile.h"
using namespace std;

void showfile()
{
  string data;
  ifstream file;
  file.open("record.txt");

  if(file.fail())
  {
    cout << "Error file in opening!" << endl;
    exit(1);
  }
  // show data from record.txt line by line
  while(getline(file, data))
  {
    cout << data << endl;
  }
}
