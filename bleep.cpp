#include <iostream>
#include <string>
#include "functions.hpp"

int main() {

  std::string word = "broccoli";
  std::string sentence = "Blah blah blah";
  bleep(word, sentence);
  
  for (int i = 0; i < sentence.size(); i++) {
    std::cout << sentence[i];
  }
  std::cout << "\n";
}
