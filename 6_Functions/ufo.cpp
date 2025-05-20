#include <iostream>
#include "ufo_functions.hpp"

int main() {

  // Here is where we are initializing the variables and strings to be used in the game
  std::string codeword = "codecademy";
  std::string answer = "__________";
  int misses = 0;
  std::vector<char> incorrect;
  bool guess = false;
  char letter;

  greet();


  // This is the while loop that runs the game until the answer is correct or the max amount of incorrect guesses is made
  while (answer != codeword && misses < 7) {

    // These function calls display the status of the guesses and prompts user input for the codeword
    display_misses(misses);
    display_status(incorrect, answer);
    std::cout << "Please enter your guess: ";
    std::cin >> letter;

    // This for loop iterates through the codeword and compares it to the user answer
    for (int i = 0; i < codeword.length(); i++) {
      if (letter == codeword[i]) {
        answer[i] = letter;
        guess = true;
      }
    }

    // This conditional statement prints out the results of the guess
    if (guess) {
      std::cout << "\nCorrect! You're closer to cracking the codeword.\n";
    }
    else {
      std::cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
      incorrect.push_back(letter);
      misses++;
    }
    guess = false;
  }
  end_game(answer, codeword);
}