#include <iostream>
#include <string>
#include "Person.h"

int main()
{
    std::string name;
    int age;

    std::cout << "What's your name? ";
    std::cin >> name;
    std::cout << "What's your age? ";
    std::cin >> age;

    Person user(name, age);

    std::cout << "\n"
              << user.toString() << std::endl;
    return 0;
}