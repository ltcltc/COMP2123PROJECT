// checkwin.cpp
// return true to main.cpp if the boxes of gamboard is not filled.
#include <iostream>
#include <string>
using namespace std;

bool checkwin(string ** map, string & winner, int size, string player_name)
{
  int player = 0, ai = 0;

  // check win horizozntially
  for (int row = 0; row < size; row++)
  {
    for (int col = 0; col < size; col++)
    {
      if(map[row][col] == "x")
        player++;
      else if(map[row][col] == "o")
        ai++;
    }

    if (player == size)
    {
      winner = player_name;
      return false;
    }
    else if (ai == size)
    {
      winner = "ai";
      return false;
    }
    else
    {
      player = 0;
      ai = 0;
    }
  }

  // check win vertically
  for (int col = 0; col < size; col++)
  {
    for (int row = 0; row < size; row++)
    {
      if(map[row][col] == "x")
        player++;
      else if (map[row][col] == "o")
        ai++;
    }

    if (player == size)
    {
      winner = player_name;
      return false;
    }
    else if (ai == size)
    {
      winner = "ai";
      return false;
    }
    else
    {
      player = 0;
      ai = 0;
    }
  }

  // check win in left diagonal
  for (int row = 0, col = 0; row < size && col <= size; row++, col++)
  {
    if(map[row][col] == "x")
      player++;
    else if (map[row][col] == "o")
      ai++;
  }

  if (player == size)
  {
    winner = player_name;
    return false;
  }
  else if (ai == size)
  {
    winner = "ai";
    return false;
  }
  else
  {
    player = 0;
    ai = 0;
  }

  // check win in right diagonal
  for (int row = 0, col = (size-1); row < size && col >= 0; row++, col--)
  {
    if(map[row][col] == "x")
      player++;
    else if (map[row][col] == "o")
      ai++;
  }

  if (player == size)
  {
    winner = player_name;
    return false;
  }
  else if (ai == size)
  {
    winner = "ai";
    return false;
  }
  else
  {
    // check draw
    for (int row = 0; row < size; row++)
    {
      for (int col = 0; col < size; col++)
      {
        if(map[row][col] == "*")
          return true;
      }
    }
    winner = "nobody";
    return false;
  }
}
