// input.cpp
// get input from users and AI
#include <iostream>
#include <string>
#include "input.h"
using namespace std;

void input(string ** map, int size, int & step)
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
  // put 'x' to the array
  map[row][col] = "x";
  step++;

  // check whether all array box is filled and return to main.cpp if true
  if (step == size * size)
    return;

  // Ai generate row and column
  do {
    row = rand()%size;
    col = rand()%size;
  } while(map[row][col] != "*");
  map[row][col] = "o";
  step++;

  // check whether all array box is full and return to main.cpp if true
  if (step == size * size)
    return;

}
