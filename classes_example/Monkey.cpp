#include <iostream>
#include "Monkey.h"
#include <string>

std::string selection()
{
    std::string choice;
    std::cout << "What do you want the monkey to do? (Dance, Eat)?: ";
    std::cin >> choice;
    std::cout << std::endl;

    return choice;
}

void dance()
{
    std::cout << "Monkey says: Dance for me, dance for me, ei ei ei" << std::endl;
}

void eat()
{
    std::cout << "Monkey says: nom nom" << std::endl;
}