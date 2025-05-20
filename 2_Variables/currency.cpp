#include <iostream>

int main() {
  
  double pesos;
  double reais;
  double soles;
  double dollars;

  double peso_conversion = 0.056;
  double reais_conversion = 0.18;
  double sole_conversion = 0.27;
  
  std::cout << "Enter number of Columbian Pesos: ";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

  dollars = (peso_conversion * pesos) + (reais_conversion * reais) + (sole_conversion * soles);

  std::cout << "US Dollars = $" << dollars << "\n";
}
