#include <iostream>
#include <string>
#include "playerinput.h"
using namespace std;

void playerinput(string ** map)
{
  int row, col;
  // ask users input
  cout << "Please input the Row and Column: ";
  cin >> row >> col;
  // check if map empty
  while (map[row][col] != "*")
  {
    cout << "Input Invalid. Please input Row and Column again." << endl;
    cin >> row >> col;
  }

  map[row][col] = "x";
}
