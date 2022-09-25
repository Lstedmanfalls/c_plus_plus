#include <iostream>
#include "Person.h"

int main()
{
    Person person;

    std::string name;

    std::cout << "What is your name?" << std::endl;
    std::getline(std::cin, name);
    person.setName(name);

    std::cout << "Nice to meet you " << person.getName() << "! :)" << std::endl;
    return 0;
}