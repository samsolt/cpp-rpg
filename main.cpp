#include <iostream>
#include "ascii.cpp"

int main()
{
    int volba;

    std::cout << "CPPRPG" << std::endl;
    std::cout << "(1) Start" << std::endl;
    std::cout << "(2) Exit" << std::endl;
    std::cin >> volba;

    printMonster();
}