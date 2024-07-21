#include <iostream>
#include "ttt_functions.hpp"

int main() {

  // Here the variables and matrices are established to be used in the game
  char board[3][3] = {{'_','_','_'}, {'_','_','_'}, {'_','_','_'}};
  char xos[9] = {'x','o','x','o','x','o','x','o','x'};
  int x_input;
  int y_input;
  int turns = 0;
  bool match = true;

  // Here the startup function which prints the welcome message and game info, the the blank board is displayed and the game begins
  start_game();
  current_board(board);

  while (match == true && turns < 9) {

    // This part of the while prints the current turn and prompts the user input for the coordinates on the board, then updates the board matrix
    std::cout << xos[turns] << "'s turn! Please enter the coordinates of where you would like to place your mark! Top left is (1,1) and bottom right is (3,3).\n";
    std::cout << "X input: ";
    std::cin >> x_input;
    std::cout << "Y input: ";
    std::cin >> y_input;
    std::cout << "\n";
    board[x_input - 1][y_input - 1] = xos[turns];
    current_board(board);

    // This conditional statement sorts through the current board matrix and end the program if there is a match
    if ((board[0][0] == xos[turns]) && (board[0][1] == xos[turns]) && (board[0][2] == xos[turns])) {
      std::cout << xos[turns] << " wins!\n";
      match = false;
    }
    if ((board[1][0] == xos[turns]) && (board[1][1] == xos[turns]) && (board[1][2] == xos[turns])) {
      std::cout << xos[turns] << " wins!\n";
      match = false;
    }
    if ((board[2][0] == xos[turns]) && (board[2][1] == xos[turns]) && (board[2][2] == xos[turns])) {
      std::cout << xos[turns] << " wins!\n";
      match = false;
    }
    if ((board[0][0] == xos[turns]) && (board[1][0] == xos[turns]) && (board[2][0] == xos[turns])) {
      std::cout << xos[turns] << " wins!\n";
      match = false;
    }
    if ((board[0][1] == xos[turns]) && (board[1][1] == xos[turns]) && (board[2][1] == xos[turns])) {
      std::cout << xos[turns] << " wins!\n";
      match = false;
    }
    if ((board[0][2] == xos[turns]) && (board[1][2] == xos[turns]) && (board[2][2] == xos[turns])) {
      std::cout << xos[turns] << " wins!\n";
      match = false;
    }
    if ((board[0][0] == xos[turns]) && (board[1][1] == xos[turns]) && (board[2][2] == xos[turns])) {
      std::cout << xos[turns] << " wins!\n";
      match = false;
    }
    if ((board[0][2] == xos[turns]) && (board[1][1] == xos[turns]) && (board[2][0] == xos[turns])) {
      std::cout << xos[turns] << " wins!\n";
      match = false;
    }
    if (match == true && turns == 8) {
      std::cout << " tie!\n";
      match = false;
    }
    ++turns;
  }
}