#include <iostream>
#include <vector>
#include <string>

int main() {

  // This is the beginning of the code where we initialize the variables
  std::string text = "Bananarama";
  std::vector<char> vowels = {'a','e','i','o','u'};
  std::vector<char> results;

  // This is our nested for loop where we iterate through the input text, and check if the input is a vowel. Then we store it into the results if so. As well we also will double if it is e or u.
  for (int i = 0; i < text.size(); i++) {

    if (text[i] == 'u' || text[i] == 'e') {
        results.push_back(text[i]);
      }

    for (int j = 0; j < vowels.size(); j++) {
      if (text[i] == vowels[j]) {
        results.push_back(text[i]);
      }
    }
  }

  // Finally, this for loop prints the results to check our work
  for (int k = 0; k < text.size(); k++) {
    std::cout << results[k];
  }
  std::cout << "\n";
}