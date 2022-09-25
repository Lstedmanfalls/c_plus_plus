#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
#include <string>

// Define the Person class

class Person
{
private:
    std::string name;

public:
    Person();
    void setName(std::string newName);
    std::string getName();
};

#endif /* PERSON_H_ */