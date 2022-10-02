#include <iostream>
#include <string>
#include "Person.h"
#include <sstream>

Person::Person(std::string name, int age)
{
    this->name = name;
    this->age = age;
}

std::string Person::toString()
{
    std::stringstream ss;

    ss << "Wow " << name << "! You look great for being " << age << " ;)" << std::endl;

    return ss.str();
}