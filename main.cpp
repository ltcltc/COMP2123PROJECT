#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

#include "info.h"
#include "printboard.h"
#include "input.h"
#include "checkwin.h"
#include "updatefile.h"
#include "showfile.h"
using namespace std;

int main()
{
  string player, winner, show;
  int size, step = 0, round = 0;;
  // get basic info from console
  info(player, size);

  string ** map = new string *[size];
  for (int i = 0; i < size; ++i)
  {
    map[i] = new string [size];
  }
  // assign star to each array
  for (int row = 0; row < size; row++)
  {
    for (int col = 0; col < size; col++)
    {
      map[row][col] = "*";
    }
  }

  // input data into record.txt first
  ofstream file;
  file.open("record.txt");

  if(file.fail())
  {
    cout << "Error file in opening!" << endl;
    exit(1);
  }

  file << "This is your result: " << endl << endl;

  file.close();

 do
 {
   round++;
   printboard(size, map);
   input(map, size, step);
   // update record to record.txt
   updatefile(size, map, round);
 } while (checkwin(map, winner, size, player));

 printboard(size, map);
 // show who is the winner
 cout << "Winner is " << winner << ".\n";
 // prompt input to show the record.txt
 cout << "Do you want to show your result? (Y/N)";
 cin >> show;

 if (show == "Y")
 {
   // show record.txt
   showfile();
 }
 else if(show == "N")
 {
  // show message
  cout << "You may find the record file from the same directory." << endl;
 }
 return 0;
}
