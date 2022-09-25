#include <iostream>
#include "Person.h"
#include <string>

Person::Person()
{
    name = "";
}

void Person::setName(std::string newName)
{
    name = newName;
}

std::string Person::getName()
{
    return name;
}