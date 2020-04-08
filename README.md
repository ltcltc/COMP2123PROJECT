## **Group No.: 181**       **Group members: Wan, Ho Yin, Jason; Tianchu Li**

## **Topic: Noughts and Crosses Game**

## **Game Descriptions:**

1.  First, the programme asks the player to choose the level of AI challenge and
    ask players to input their name.

2.  The programme shows the gameboards (includes number 1 - 9) with countdown
    and then asks the player to input a number.

3.  Afterwards, the player inputs a number within the range from one to nine.

4.  After, AI makes step base on the challenging level, repeat step 2-4 until
    entering into step 5.

5.  Game end until three continuous boxes have the same patterns.

6.  Then, the records of the steps made by players will be shown as a
    transcript.

7.  There is a countdown from 15 seconds. If the players cannot play it within
    the limit, He/she will be failed.


## **Features**

```
1.  Chessboard Layout: To print the layout of the Noughts and Crosses Chessboard
    based on the numerical sequence.

   Eg:

   Gameboard: Time: 15 s

   ---------------------------

   1 | 2 | 3
   ----------
   4 | 5 | 6
   ----------
   7 | 8 | 9
   ---------------------------

    Please input: (number)
    ----------------------------

```

```
2.  When the game is ended. The programme shows,

   Congratulation, Jason! You win the game!

   Here are your records.


1st input:

Jason: 1

AI: 2

2nd input:

Jason: 5

AI: 7

:::

5th input:

Jason: 9

AI: 8

```

3.  AI player: There are two options which the player will choose two different
    levels of AI to play with:

    1.  AI will generate a number according to the step of the human players.

    2.  Or AI will generate a number randomly.

4.  MakeAStep: Player makes a valid step to be recorded in the program

5.  Chessboard: To storage the steps made by the player

6.  Countdown: The player only have 15 seconds to play the game. Otherwise,
    he/she lose.

7.  Win check: To check if one of the players is winning or the game is drawn.
'''

## **Functions:**

| **Prototype**                                            | **Descriptions**                                                                                                                                                                                                                                                    |
|----------------------------------------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| `int main();`                                             | Loop the game if player wants to play it again. Otherwise, end the game.                                                                                                                                                                                            |
| `void input();`                                            | Get the input from player.                                                                                                                                                                                                                                          |
| `void aiLevel();`                                          | Choose the AI level                                                                                                                                                                                                                                                 |
| `void printboard();`                                       | Print the game board                                                                                                                                                                                                                                                |
| `bool checkwin();`                                         | Check which players win or the game has drawn and return bool value.                                                                                                                                                                                                |
| `int aisteps();`                                           | AI takes steps based on the level chosen by the player. Then return an integer. a - AI tries to take a step and make it more consecutive in sequence based on random numbers, possibility, and chessboard. b - AI generate a random number to take a possible step. |
| `bool countdown();`                                        | Countdown from 15 seconds to 0; Then return a bool value.                                                                                                                                                                                                           |
| `Void updatefile();`                                       | Record all the steps made by the player and save it to a .txt file to generate a transcript for them after the game end.                                                                                                                                            |
| `Void showfile();`                                         | Show the transcript records that made by updatefile() at the end of the game.                                                                                                                                                                                       |
|                                                          |                                                                                                                                                                                                                                                                     |
| **Code Requirements**                                    | **Game Implementations:**                                                                                                                                                                                                                                           |
| Generation of random game sets or events                 | AI generates a number for steps                                                                                                                                                                                                                                     |
| Data structures for storing game status                  | 1. Array in integer datatype stores the data of the gameboard. 2. String to store player name.                                                                                                                                                                                                        |
| Dynamic memory management                                | Program storage the steps taken by the player                                                                                                                                                                                                                       |
| File input/output (e.g., for loading/saving game status) | The program saves and reads the steps of the players to and from a document.                                                                                                                                                                                        |
| Program codes in multiple files                          | Files: main.cpp input.cpp, input.h aiLevel.cpp. aiLevel.h printboard.cpp, printbaord.h checkwin.cpp, checkwin.h aisteps.cpp, aisteps.h countdown.cpp, countdown.h updatefile.cpp, updatefile.h showfile.cpp, showfile.h                                             |
|                                                          |                                                                                                                                                                                                                                                                     |

**References:** Tic-Tac-Toe, Wikipedia, https://en.wikipedia.org/wiki/Tic-tac-toe
