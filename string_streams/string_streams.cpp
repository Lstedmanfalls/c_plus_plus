#include <iostream>
#include <string>
#include <sstream>

int main()
{
    std::string name = "Lisa";
    int age = 34;

    std::stringstream ss;

    ss << "My name is: ";
    ss << name;
    ss << "; My age is: ";
    ss << age;

    std::string info = ss.str();

    std::cout << info << std::endl;

    return 0;
}