#include <iostream>

int main() {
  
  // This is my dogs age
  int dog_age = 38;
  
  int early_years = 21;
  int later_years = 4*(dog_age - 2);
  int human_years = early_years + later_years;

  std::cout << "My name is DoggyDogHAHA! Ruff ruff, I am " << human_years << " years old in human years.\n";
  }