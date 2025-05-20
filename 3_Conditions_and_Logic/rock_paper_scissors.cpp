#include <iostream>
#include <stdlib.h>
#include <vector>

/* This program simulates a Rock, Paper, Scissors type game with a little more complexity. The user plays against the computer. */

int main() {

  srand (time(NULL));
  int computer = rand() % 3 + 1;
  int user = 0;
  std::vector<std::string> Guesses {"Rock","Paper","Scissors"};

  std::cout << "Dwayne Johnson, Paper, Scissors GAME\n\n";
  std::cout << "Rock (Dwayne 'The Rock' Johnson)\n";
  std::cout << "Paper\n";
  std::cout << "Scissors\n";
  std::cout << "DON'T SHOOT! ";
  std::cin >> user;
  std::cout << "\n";

  std::cout << "Computer: " << Guesses[computer-1] << "\n";
  std::cout << "User: " << Guesses[user-1] << "\n";

  if (user == computer) {
    std::cout << "TIE!\n";
  }
  else if (user == 1 && computer == 2) {
    std::cout << "Computer Wins!\n";
  }
  else if (user == 1 && computer == 3) {
    std::cout << "User Wins!\n";
  }
  else if (user == 2 && computer == 1) {
    std::cout << "User Wins!\n";
  }
  else if (user == 2 && computer == 3) {
    std::cout << "Computer Wins!\n";
  }
  else if (user == 3 && computer == 1) {
    std::cout << "Computer Wins!\n";
  }
  else if (user == 3 && computer == 2) {
    std::cout << "User Wins!\n";
  }
  else {
    std::cout << "Invalid game, must be 1, 2, or 3. Try again :(\n";
  }
}