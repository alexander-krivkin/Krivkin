#include <iostream>

int main()
{
  int number{};
  
  std::cout << "Enter number: \t\t";
  std::cin >> number;
  std::cout << "Your number is: \t" << number << "\n";

  return EXIT_SUCCESS;
}
