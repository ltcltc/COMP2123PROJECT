#include <iostream>
#include <string>

#include "info.h"
#include "printboard.h"
#include "playerinput.h"

using namespace std;

int main()
{
  string player;
  int level, size;
  // get basic info from console
  info(player, level, size);

  string ** map = new string *[size];
  for (int i = 0; i < size; ++i)
  {
    map[i] = new string [size];
  }
  // assign space to each array
  for (int row = 0; row < size; row++)
  {
    for (int col = 0; col < size; col++)
    {
      map[row][col] = "*";
    }
  }

 do
 {
   printboard(size, map);
   playerinput(map);
   //aisteps();
 }
 while (true);
 //}while (checkwin());


 return 0;
}
