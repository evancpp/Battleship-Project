# Battleship-Project
CS1210 – C++ Programming
Project #1
Due:  At the beginning of class (see course web for due date)
Points:  40

Objective:  Develop a C++ program to play a text-based, computerized-version of BATTLESHIP™ using an instructor-provided library (battleship.o) and header file (battleship.h).

Discussion:  To become familiar with the game you need to develop, you can play it a few times at ~vfang/public/battleship_project1/battle.  I suggest you do this before trying to write the program.
     After playing the game a time or two, take a look at the file battleship_main.cpp in /home/faculty/ggreve/CS1210/public.  I have provided you this file to get you started, so copy it to the directory where you usually write your programs.   By the way, you’ll also want to copy battleship.h and battleship.o.  Notice that the file battleship_main.cpp has comments to give you the general idea on what order you need to do things for the game.  Use those comments and the descriptions for the functions below, to figure out how to use the functions to build the main program for the game. 
     The functions available to you are listed in the header file battleship.h (and also below).     They are:
•	void welcome():  This function clears the screen and writes the message “Welcome to BATTLESHIP” to the screen several times.  Example:  welcome();
•	void clearTheLine(int lineNum):  This function erases all characters on line lineNum, where lineNum is the line number, counting from the top, usually between 0 and 23.  Example:  clearTheLine(5);
•	void clearTheScreen():  This function erases all the characters on your terminal screen leaving you with a blank screen.  Example:  clearTheScreen();
•	void pauseForEnter():  This function writes the message “Press enter to continue” on line 23 and waits for you to just that (actually, it’ll let you proceed after typing any character).  Example:  pauseForEnter();
•	string getResponse(int lineNum, int colNum, string prompt):  This function lets you write a user prompt, prompt, to the user beginning at line lineNum and column colNum, and then get the user’s response as a string value.  Use this function to get the human player’s move.  
Example:  userMove = getResponse(16, 0, “Please enter your move”);
 
•	void writeMessage(int lineNum, int colNum, string message):  This function lets you write message to the screen at line lineNum, column colNum.  Use this function to give feedback on the game.  
Example:  writeMessage(18, 0, “The move you just typed is invalid”);
•	void initializeBoard(Board &gameBoard):  This function creates a new game board (you will need two of these in the game, one for the human player and one for the computer player).  NOTE:  this function uses a new variable type called Board that you’ve not seen yet.  This variable keeps track of each player’s game situation.  You can declare a Board variable like any other variable (e.g., Board computerBoard;).   Example:  initializeBoard(computerBoard);
•	void displayBoard(int lineNum, int colNum, int playerType, Board gameBoard):    Assuming you have declared and initialized a Board variable, displayBoard() will show it’s current configuration.  The parameter playerType is either the constant HUMAN or COMPUTER to let the function know whose board is being displayed.   The parameters lineNum and colNum give the upper left line and column position of the board.  
Example:  displayBoard(1, 1, HUMAN, humanBoard);
•	int checkMove(string move, Board gameBoard, int &row, int &col):  This function validates a player’s move.  If the move is acceptable, it returns the constant VALID_MOVE and the variables row and col can be used in the call to playMove().  If the move string is badly formed (e.g., the user typed “10 A” instead of “A 10”) or move has already been used, then checkMove() returns the constants ILLEGAL_FORMAT or REUSED_MOVE, respectively.  In this case,  row and col contain the unusable values -1 and -1, respectively.  NOTE:  you need to keep checking the move (and asking for a new one, if necessary) until you get a VALID_MOVE.  
Example:  result = checkMove(move, humanBoard, row, col);
•	int playMove(int row, int col, Board &gameBoard):  This function is how you execute a move with the returned value being the result (e.g., hit or miss) of that move.  Row and col are the move you want to make (you got these from checkMove()) and gameBoard is the board on which you want to make the move.  Your program should call playMove() after using checkMove() to make sure the user (or computer) picked a valid move and set row and col to valid numbers.  Example:  result = playMove(row, col, humanBoard);
•	void writeResult(int lineNum, int colNum, int result, int playerType):  This function uses the value returned from playMove() and writes a text message on line lineNum, column colNum telling you whether the last move was a “hit” or a “miss” (and if the result was a “hit”, what ship was hit).  The parameter playerType is either the constant HUMAN or COMPUTER to let the function know who made the move.  For example, suppose your program had the code:  result = playMove(row, col, humanBoard);.  You then take the variable result and pass it to writeResult() to report the outcome of the move.
Example:  writeResult(20, 0, result, COMPUTER);
 
•	bool isItSunk(int result):  This function returns a true or false indicating whether or not the result of the last playMove() sunk a ship.  For example, suppose your program had the code:  result = playMove(row, col, humanBoard);.  You then take the variable result and pass it to isASunk() to determine if you just sunk a ship.
Example:   if (isASunk(result)) { /* do something */ };
•	string randomMove():  This function allows the computer to pick a random move.  Note the computer’s move must be validated, because it may pick a move that’s already been used.  Example:  computerMove = randomMove();

Additional Details:  
a.	Submit your source code by the beginning of class on due date.  Turn in a listing of your program in class that same day.
b.	All work must be done on john.
c.	Compile your main program with the command:  g++ -c battleship_main.cpp
•	This assumes your main program file is called battleship_main.cpp, if you called it something different, use that name instead.   This will create an object file battleship_main.o which you will use as directed below.
d.	Link your program with:  g++ -o battle battleship_main.o battleship.o -lcurses
•	The above command combines the code you’ve written (i.e., battleship_main.o with the code your instructor has written, battleship.o, with some additional system libraries for screen control and colored text, -lcurses, to produce an executable file called battle which you can run.  Note:  you must have already copied battleship.o to the same location as your program as directed above.

Style:
a.	Please be sure to properly comment you program and use appropriate white space.  This includes proper indentation.
b.	Most of the meaningful, brief comments to give better understanding to the logic of each block of your code are already included in battleship_main.cpp.  Add other comments as you feel necessary.
c.	Please, use meaningful variable names.

Hints:
a.	Solve this problem step-by-step by implementing the directions provided by each comment in battleship_main.cpp one comment at a time.  This way you can learn what each function does little-by-little.
b.	You will need to use a while statement to validate the move for both the computer and the user (these while statements, but not their bodies, are provided for you).
c.	The while statement for the overall game is also already provided for you.  You just need to figure out how we know when we’re done.  The comment in the if statement (within the while loop) which I’ve provided gives you a major clue.  Also, you’ll need to declare two variables to keep track of how many ships the user and computer have sunk.
 
