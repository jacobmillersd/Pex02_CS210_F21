/** pex02funcs.c
 * =========================================================== 
 * Name: Jacob Miller
 * Section: M6/7
 * Project: Create functions for PEX2  
 * Purpose: Create functions in order to get Pigs game to run properly. Call functions in main.
 * =========================================================== */

#include <stdio.h>
#include <stdlib.h>

char getCharSafe(){
   char value;
   char scanfReturn = 0;

   // attempt to read an integer value
   scanfReturn = scanf(" %c", &value);
   fflush(stdin); // eliminate any excess input

   // quit if unsuccessful
   if(scanfReturn != 1){
      fprintf(stderr, "Bad char input - terminating\n");
      exit(1);
   }
   return value;
}


int rollDie(){
    // get random number between 1 and 6
    int roll = rand() % 6 + 1;
    return roll;
    }



int takeTurn(char* playerName, int playerScore) {
    printf("It's your turn, %s\n", playerName);
    int turnScore = 0;
    char roll = ' ';
    

    do {
        
        int currentRoll = rollDie();
    // give pig out message if = to 1 
        if(currentRoll == 1) {
            printf("You pigged out! Turn over. \n");
            return playerScore;
        }

    // run through if roll if roll is not = to 1 
        else {
            turnScore += currentRoll;
            printf("You rolled a %i and have a turn score of %i, bringing your total to %i.\n", currentRoll, turnScore, playerScore + turnScore);
            printf("Roll Again? ");
            scanf(" %c", &roll);
            //implement function to make sure entered character is a char
            
            
        }
    } while (roll == 'y' || roll == 'Y');
        
    return playerScore + turnScore;
}


void displayGameState(char* player1Name, int player1Score, char* player2Name, int player2Score) {
    //print out the current scores and names
    printf("    Score Player\n");
    printf("        %i %s\n", player1Score, player1Name);
    printf("        %i %s\n\n", player2Score, player2Name);
        return;
}

int winningPlayer(int player1Score, int player2Score) {
    // decide if someone has won the game or not
    if (player1Score < 100 && player2Score < 100) {
        return 0;
    }
    if (player1Score > 100 || player2Score > 100) {
        if (player1Score > player2Score) {
            return 1;
        }
        if (player2Score > player1Score) {
            return 2;
        }
        if (player1Score == player2Score) {
            return 3;
        }
    }
        return 0;
    }

void displayWinner(char* player1Name, int player1Score, char* player2Name, int player2Score) {
    //decide who has won the game
    // print out who has won the game
    if (player1Score > 100 || player2Score > 100) {
        if (player1Score > player2Score) {
            printf("%s, you won!\n", player1Name);
            return;
        }
        if (player2Score > player1Score) {
            printf("%s, you won!\n", player2Name);
            return;
        }
        if (player1Score == player2Score) {
            printf("It's a tie!\n");
            return;
        }
}
}
