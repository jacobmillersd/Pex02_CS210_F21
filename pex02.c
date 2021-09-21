/** pex02.c
 * =========================================================== 
 * Name: Jacob Miller
 * Section: M6/7
 * Project: PEX 2 
 * Purpose: Create the game PIGs using loops and functions laid out in the instruction document. Overall, try to 
            create a fully functioning game while complying with DFCS standards.
 * Documentation: Cadet Wong helped me figure out I had an error when calling my takeTurn function. I then was
                  able to fix that issue which made the program run smoothly. 
 * =========================================================== */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "pex02funcs.h"


int main() {

    //declare any variables that will be used throughout
    char player1Name[10]= "";
    char player2Name[10]= "";
    int player1Score = 0;
    int player2Score = 0;

  //initiate time
  srand(time(0));
  
  //introduce the game and ask for names - show starting scores
  printf("  Welcome to the Pigs! game.\n");
  printf("Player one, what is your name: ");
  scanf("%s", player1Name);
  printf("Player two, what is your name: ");
  scanf("%s", player2Name);
  displayGameState(player1Name, player1Score, player2Name, player2Score);

//run through turns until there is a winning player
  while(!winningPlayer(player1Score, player2Score)) {
    
    //player 1 turn
    player1Score = takeTurn(player1Name, player1Score);

    //print current scores 
    displayGameState(player1Name, player1Score, player2Name, player2Score);
    
    //player 2 turn 
    player2Score = takeTurn(player2Name, player2Score);
    
    //both people have gone print current scores
    displayGameState(player1Name, player1Score, player2Name, player2Score);
  }

  //display the winner of the game 
  displayWinner (player1Name, player1Score, player2Name, player2Score);

  printf("Thanks for playing Pig!\n");

return 0;
}

