#include <iostream>
#include <string>
using namespace std;

void printboard(int size, string ** map)
{
  cout << "  ";
  for (int i = 0; i < size; i++)
  {
    cout << i << " ";
  }

  cout << endl;

  // output gameboard in formate
  for (int row = 0; row < size; row++)
  {
    cout << row << " ";

    for (int col = 0; col < size; col++)
    {
      cout << map[row][col] << " ";
    }

    cout << endl;
  }
}
