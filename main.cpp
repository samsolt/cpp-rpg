#include "utility.cpp"
#include <iostream>
#include <string>
#include <unistd.h> // na sleep

int main() {
  int choice;
  std::string weaponInv[2] = {"empty", "empty"};

  while (true) {
    std::cout << "CPPRPG" << std::endl;
    std::cout << "(1) Start" << std::endl;
    std::cout << "(2) Exit" << std::endl;
    std::cin >> choice;

    switch (choice) {
    case 1:
      clear();
      break;
    case 2:
      clear();
      return 0;
    default:
      clear();
      std::cout << "invalid input!\n\n";
      continue;
    }
    break;
  }
}
