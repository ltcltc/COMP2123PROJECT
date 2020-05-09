## **Group No.: 181**      

## **Group members: Wan, Ho Yin, Jason; Tianchu Li**

## **Topic: Noughts and Crosses Game**

## **Game Descriptions:**

1.  First, the programme asks the player to choose the size of the gameboard(3x3, 5x5) to challenge and
    ask players to input their name.

2.  The programme shows the gameboards and then asks the player to input a number set of the step which player wants to take.

3.  After, AI makes step, repeat step 2-4 until
    entering into a win or draw status checked by the program.

5.  Game end until three/five continuous boxes have the same patterns.

6.  Then, the records of the steps made by players will be shown as a
    transcript.


## **Features**

```
1.  Chessboard Layout: To print the layout of the Noughts and Crosses Chessboard
    based on the numerical sequence.

   Eg:


   ---------------------------
   
    0   1   2
  0 * | * | *
   ----------
  1 * | * | *
   ----------
  2 * | * | *
   ---------------------------

    Please input: (number)
    ----------------------------
    Note: the User input's place will be replaced by o
    the Ai's will be replaced by x

```

```
2.  When the game is ended. The programme shows,

   Congratulation, Jason! You win the game!

   Here are your records.


1st input:

Jason: 0 0


2nd input:

Jason: 1 1


:::

5th input:

Jason: 2 2


```

3.  AI player: There are two options which the player will choose two different
    levels of AI to play with:

    1.  AI will generate a number according to the step of the human players.

    2.  Or AI will generate a number randomly.

4.  MakeAStep: Player makes a valid step to be recorded in the program

5.  Chessboard: To storage the steps made by the player

6.  Win check: To check if one of the players is winning or the game is drawn.
'''

## **Functions:**

| **Prototype**                                            | **Descriptions**                                                                                                                                                                                                                                                    |
|----------------------------------------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| `int main();`                                             | Loop the game if player wants to play it again. Otherwise, end the game.                                                                                                                                                                                            |
| `void input();`                                            | Get the input from player.                                                                                                                                                                                                                                                                                                                                                                                          |
| `void printboard();`                                       | Print the game board                                                                                                                                                                                                                                                |
| `bool checkwin();`                                         | Check which players win or the game has drawn and return bool value.                                                                                                                                                                                                                                                                                                                                                              |
| `Void updatefile();`                                       | Record all the steps made by the player and save it to a .txt file to generate a transcript for them after the game end.                                                                                                                                            |
| `Void showfile();`                                         | Show the transcript records that made by updatefile() at the end of the game.                                                                                                                                                                                       |
|                                                          |                                                                                                                                                                                                                                                                     |
| **Code Requirements**                                    | **Game Implementations:**                                                                                                                                                                                                                                           |
| Generation of random game sets or events                 | AI generates a number for steps                                                                                                                                                                                                                                     |
| Data structures for storing game status                  | 1. Array in integer datatype stores the data of the gameboard. 2. String to store player name.                                                                                                                                                                                                        |
| Dynamic memory management                                | Program storage size of the gameboard                                                                                                                                                              |
| File input/output (e.g., for loading/saving game status) | The program saves and reads the steps of the players to and from a document.                                                                                                                                                                                        |
| Program codes in multiple files                          | Files: main.cpp input.cpp, input.h aiLevel.cpp. aiLevel.h printboard.cpp, printbaord.h checkwin.cpp, checkwin.h aisteps.cpp, updatefile.cpp, updatefile.h showfile.cpp, showfile.h                                             |
|                                                          |                                                                                                                                                                                                                                                                     |

**References:** Tic-Tac-Toe, Wikipedia, https://en.wikipedia.org/wiki/Tic-tac-toe

Compilation and Execution Instructions. Makefile of the files in the folder and run the main.cpp. Follow the instructions listed in the features.
