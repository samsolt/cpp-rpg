#include "utility.cpp"
#include <iostream>
#include <string>

void battle(int enemyCount, std::string enemyType) {
  int enemyHealth[3];
  std::string enemyVariant[3];
  playerTurn();
}
void attack() {
  std::cout << "Select target (1-3): ";
  std::cout << "Select weapon\n";
}
void item() {
  // print itemInv
  for (int i = 3; i < 0; i--) {
  }
  std::cout << "Select item to use: ";
}
void playerTurn() {
  int choice;

  while (true) {
    clear() std::cout << "(1) Attack\n";
    std::cout << "(2) Item\n";
    std::cout << "(3) Flee\n";
    std::cin >> choice;

    switch (choice) {
    case 1:
      attack();
      break;
    case 2:
      item();
      break;
    case 3:
      std::cout << "nuh uh";
      continue;
    default:
      std::cout << "invalid input!";
      continue;
    }
  }
}
