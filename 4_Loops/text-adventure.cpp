#include <iostream>

int main() {

  char answer1 = ' ';
  char answer2 = ' ';
  char answer3 = ' ';

  while (1) {

    std::cout << "Welcome adventurer, today you will be going on a simple walk down a walking trail in my hometown. You will be faced with several dangers on your walk and forced to make a decision for your survival. GOOD LUCK!\n\n";

    // Challenge 1
    std::cout << "1) While walking across the rail trail bridge, you come across a half eaten large fry from McDonalds.\n\n" << " a) Eat the fries\n" << " b) Throw them away\n" << " c) Keep walking\n\n";
    std::cout << "What do you do? ";
    std::cin >> answer1;

    if (answer1 == 'a') {
      std::cout << "\nThe fries you ate gave you west nile virus and you experience a slow and painful death. GAME OVER!\n";
      break;
    }
    else if (answer1 == 'b') {
      std::cout << "\nWhile throwing the fries out you encountered a black bear eating out of the trash. It easily mauls you to death. GAME OVER!\n";
      break;
    }
    else if (answer1 == 'c') {
      std::cout << "\nYou decide to keep walking and your adventure continues!\n";
    }
    else if (answer1 != 'a' && answer1 != 'b' && answer1 != 'c') {
      std::cout << "You typed an invalid answer, so your character does nothing and eventually starves to death. GAME OVER!\n";
      break;
    }

    // Challenge 2
    std::cout << "2) After walking by the fries you head towards a village.\n\n" << " a) Ask the townspeople for help\n" << " b) Keep walking\n" << " c) Steal their food and eat it\n\n";
    std::cout << "What do you do? ";
    std::cin >> answer2;

    if (answer2 == 'a') {
      std::cout << "\nYou quickly realize that the villagers are from an enemy faction. They beat you, strip you naked, and take all of you gold. Leaving you to the buzzards. GAME OVER!\n";
      break;
    }
    else if (answer2 == 'b') {
      std::cout << "\nYou decide to keep walking and your adventure continues!\n\n";
    }
    else if (answer2 == 'c') {
      std::cout << "\nThe food you ate was celery, which you are allergic to. I think you can guess what happens next. GAME OVER!\n";
      break;
    }
    else if (answer2 != 'a' && answer2 != 'b' && answer2 != 'c') {
      std::cout << "\nYou typed an invalid answer, so your character does nothing and eventually starves to death. GAME OVER!\n";
      break;
    }


    // Challenge 3
    std::cout << "3) After walking by the village you see a mysterious backpack and approach it.\n\n" << " a) Keep walking\n" << " b) Open the backpack\n" << " c) Look for the owner of the backpack\n\n";
    std::cout << "What do you do? ";
    std::cin >> answer3;

    if (answer3 == 'a') {
      std::cout << "\nYou decide to keep walking which concludes your adventure. Moral of the story, never go near danger if you are weak. THE END!\n";
      break;
    }
    else if (answer3 == 'b') {
      std::cout << "\nThe backpack conatined dichlorodiethyl sulfide, otherwise known as mustard gas. Bad Choice. GAME OVER!\n\n";
      break;
    }
    else if (answer3 == 'c') {
      std::cout << "\nYou go in the woods to look for the owner of the backpack and get lost. GAME OVER!\n";
      break;
    }
    else if (answer3 != 'a' && answer3 != 'b' && answer3 != 'c') {
      std::cout << "\nYou typed an invalid answer, so your character does nothing and eventually starves to death. GAME OVER!\n";
      break;
    }
  }
}
