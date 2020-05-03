// basic_info.cpp
// get basic info from the player in console
#include <iostream>
#include <string>
#include "info.h"
using namespace std;

void info(string &player, int &level, int &size)
{
  // get player's name from console
  cout << "Please input your name: ";
  cin >> player;
  cout << "Welocme, " << player << endl << endl;

  // get game difficulties from console
  cout << "Please input number to select the level of game: " << endl;
  cout << "1: Easy" << endl;
  cout << "2: Difficult" << endl;
  cin >> level;
  cout << "You choose level " << level << endl << endl;

  // get the size of boardgame from console
  cout << "Please input the a size of gameboard: ";
  cin >> size;
  cout << "Size of gameboard: " << size << " x " << size << endl << endl;
}
