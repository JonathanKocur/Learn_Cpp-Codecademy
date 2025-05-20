#include <iostream>

// This function is the start game function that prints out the intro and instructions to the game.
void start_game() {
  std::cout << "Welcome to Jon's Tic-Tac_Toe Program. This is a standard game of Tic-Tac-Toe with Xs and Os where Xs go first. It is up to the players to determine who goes first!\n\nEach turn the gameboard will be displayed and the current player will be prompted to input the coordinates of where they would like to put their mark!\n\nGood Luck!\n\n";
}

// This nested for loop prints the current game board after each turn
char current_board(char board[3][3]) {
  std::cout << "=========\n";
  std::cout << "GAMEBOARD\n";
  std::cout << "=========\n";
  for (int i = 0; i < 3; i++) {
    std::cout << " ";
    for (int j = 0; j < 3; j++) {
      std::cout << board[i][j];
      std::cout << "  ";
    }
    std::cout << "\n";
  }
  std::cout << "\n";
}