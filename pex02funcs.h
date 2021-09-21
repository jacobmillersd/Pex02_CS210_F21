/** pex02funcs.h
 * =========================================================== 
 * Name: Jacob Miller
 * Section: M6/7
 * Project: PEX 2 Function declarations 
 * Purpose: Create declarations for the functions used throughout the game.
 * =========================================================== */

/** ----------------------------------------------
 * @brief safely read a Char
 * @return the char value read
 * pre expects the input to be a char
 * post function exits if no integer was read
 */
char getCharSafe();


/** ----------------------------------------------
 * @brief generate a random number between 1 and 6
 * @return a number between 1 and 6
 * pre no input expected
 * post function returns value
 */
int rollDie();


/** ----------------------------------------------
 * @brief get inputs and roll the die and output scores
 * @return the player's score
 * pre input should be the player name and score
 * post returns the players score 
 */
int takeTurn(char* playerName, int playerScore);


/** ----------------------------------------------
 * @brief displays the current score of the game
 * @return returns the names and scores currently 
 * pre input players names and current scores
 * post returns nothing
 */
void displayGameState(char* player1Name, int player1Score, char* player2Name, int player2Score);


/** ----------------------------------------------
 * @brief decides the name and score of winner
 * @return returns the winner score 
 * pre input player name and current score
 * post returns winning player score
 */
int winningPlayer(int player1Score, int player2Score);


/** ----------------------------------------------
 * @brief dsiplays the name and score of winner
 * @return returns the score and winner name  
 * pre input player names and current scores
 * post returns player
 */
void displayWinner(char* player1Name, int player1Score, char* player2Name, int player2Score);


