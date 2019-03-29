 #include "battleship.h"
int main()
{
        // variable declarations (you'll need others, of course)
        string randomMove();
        bool done = false;
        string playerMove,computerMove;
   Board  playerBoard, computerBoard;
   int PlayercheckResult,computerCheckResult;
        int checkMove(string move, Board gameBoard, int &row, int &col);
        int playMove(int row, int col, Board &gameBoard);
        void pauseForEnter
        bool allAreSunk;
        allAreSunk = false;
        // Welcome the player to the game
   welcome();

        // Initialize the game boards
   initializeBoard(playerBoard);
   initializeBoard(computerBoard);

        // Play the game until one player has sunk the other's ships
        while(!done)
        {

                // Clear the screen to prepare show the game situation before the moves^M

                clearTheScreen();

                // Display the game board situation
                // Get and validate the human player's move^M
                // BTW, in the following while loop (and the if statements also), I have
                // put a "0" in with the comments.  This is because in order for the
                // code to compile, you need to have something in between the parentheses

                while(playerCheckResult != VALID_MOVE )
                {
                 playerMove=getResponse(30,1,"please input a move:");
                 playerCheckResult = checkMove(playerMove, computerBoard, playerRow,playercol);
                        ;
                }

                // Get and validate the computer's move
                AiMove = randomMove();
                while(0/* need to make sure that the computer's move is valid*/)
                {
                        ;
                }

                // Execute both moves

// Clear the screen to prepare show the game situation before the moves^M

                clearTheScreen();

                // Display the game board situation
                // Get and validate the human player's move^M
                // BTW, in the following while loop (and the if statements also), I have
                // put a "0" in with the comments.  This is because in order for the
                // code to compile, you need to have something in between the parentheses

                while(playerCheckResult != VALID_MOVE )
                {
                 playerMove=getResponse(30,1,"please input a move:");
                 playerCheckResult = checkMove(playerMove, computerBoard, playerRow,playercol);
                        ;
                }

                // Get and validate the computer's move
                AiMove = randomMove();
                while(0/* need to make sure that the computer's move is valid*/)
                {
                        ;
                }

                // Execute both moves

                // Clear the screen to show the new game situation after the moves
                // Display the new game board situation
                // Display the move choices each player made
                // Show the results of the moves
                // Take note if there are any sunken ships

                // determine if we have a winner
                if(0/* has either player sunk five ships? */)
                {
                        // if one of the player's has sunk five ships the game is over
                        done = true;
                }
                else
                {
                        // pause to let the user assess the situation
                        pauseForEnter();
                }
        }

        // Announce the winner
        if(areAllSunk)
        {
                cout << " You won!!!" ;
        }
        else
        {
                cout << " The computer won :( " ;
        }

        pauseForEnter();

        return 0;
}
