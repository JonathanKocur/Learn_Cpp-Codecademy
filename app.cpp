#include <iostream>
#include "profile.hpp"

int main() {

  // Here is the main file where the object is accessed and the profile information is entered. Then a hobby is added and the profile is displayed
  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");
  sam.add_hobby("listening to audiobooks and podcasts");

  std::cout << sam.view_profile();

}
