#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
#include <string>

// Define the Person class

class Person
{
private:
    std::string name;
    int age;

public:
    Person(std::string name, int age);
    std::string toString();
};

#endif /* PERSON_H_ */