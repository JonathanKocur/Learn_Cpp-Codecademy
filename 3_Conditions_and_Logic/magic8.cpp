#include <iostream>
#include <cstdlib>

int main() {

  std::cout << "MAGIC 8-BALL: ";

  srand(time(NULL));
  int answer = std::rand() % 10;

  if (answer == 0) {
    std::cout << "It is certain.\n";
  }
  else if (0 < answer < 9) {
    std::cout << "It may or may not happen chief.\n";
  }
  else {
    std::cout << "Very doubtful.\n";
  }
}
