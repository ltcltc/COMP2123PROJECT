// updatefile.cpp
// put the input record into record.txt
#include <iostream>
#include <string>
#include <fstream>
#include "updatefile.h"

using namespace std;

void updatefile(int size, string ** map, int round)
{

  ofstream file;
  file.open("record.txt", ios::app);

  // output error message
  if(file.fail())
  {
    cout << "Error file in opening!" << endl;
    exit(1);
  }

  file << "Round : " << round << endl;

  file << "  ";
  for (int i = 0; i < size; i++)
  {
    file << i << " ";
  }

  file << endl;

  // output gameboard in formate
  for (int row = 0; row < size; row++)
  {
    file << row << " ";

    for (int col = 0; col < size; col++)
    {
      file << map[row][col] << " ";
    }

    file << endl;
  }

  file << endl << endl;
  // close the file function
  file.close();
}
