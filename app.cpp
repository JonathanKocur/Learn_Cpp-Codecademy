#include <iostream>
#include "profile.hpp"

int main() {

  // Here is the main file where the object is accessed and the profile information is entered. Then a hobby is added and the profile is displayed
  Profile jon("Jonathan Kocur", 24, "Massachusetts", "USA", "he/him");
  jon.add_hobby("listening to audiobooks and podcasts");

  std::cout << jon.view_profile();

}
