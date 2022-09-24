#include <iostream>
#include "Monkey.h"
#include <string>

int main()
{
    bool validSelection;
    do
    {
        std::string choice = selection();
        if (choice == "Dance" || "dance")
        {
            validSelection = true;
            dance();
        }

        else if (choice == "Eat" || "eat")
        {
            validSelection = true;
            eat();
        }

        else
        {
            std::cout << "Please pick an available option\n"
                      << std::endl;
        }

    } while (!validSelection);

    return 0;
}