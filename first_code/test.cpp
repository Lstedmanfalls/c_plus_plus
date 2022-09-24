#include <iostream>
#include <string>
#include <map>

int chooseQuestion()
{
    int functionChoice;

    std::cout
        << "\nWhich chapter 1 problem do you want? (Pick a number from 1 to 8): ";
    std::cin >> functionChoice;
    std::cout << std::endl;

    return functionChoice;
};

void selfTestOne()
{

    int feetOne = 0, inchesOne = 0, feetTwo(0), inchesTwo(0);
    int answer[4] = {feetOne, feetTwo, inchesOne, inchesTwo};

    std::cout
        << "Give the declaration for two variables called feet and inches. Both variables are of type int and both are to be initialized to zero in the declaration. Give both initialization alternatives."
        << std::endl;
    std::cout << std::endl;

    for (int i = 0; i < sizeof(answer) / sizeof(answer[0]); i++)
    {
        std::cout << answer[i] << std::endl;
    };
};

void selfTestTwo()
{

    int countOne = 0, countTwo(0);
    int distanceOne = 1, distanceTwo(1);

    std::cout
        << "Give the declaration for two variables called count and distance. count is of type int and is initialized to zero. distance is of type double and is initialized to 1.5. Give both initialization alternatives."
        << std::endl;
    std::cout << std::endl;

    std::cout << countOne << " " << countTwo << " " << distanceOne << " " << distanceTwo << std::endl;
}

void selfTestThree()
{

    int countOne, countTwo;
    double distanceOne, distanceTwo;
    std::string nameOne, nameTwo;
    bool TrueOne, FalseOne;

    std::cout
        << "Write a program that contains statements that output the values of five or six variables that have been defined, but not initialized. Compile and run the program. What is the output? Explain."
        << std::endl;
    std::cout << std::endl;

    std::cout << "ints print " << countOne << std::endl;
    std::cout << "doubles print " << distanceOne << std::endl;
    std::cout << "strings print " << nameOne << std::endl;
    std::cout << "bools print " << TrueOne << std::endl;

    std::cout << "\nNo idea why these numbers" << std::endl;
}

void selfTestFour()
{

    std::cout
        << "Convert the following mathematical formula to a C++ expression."
        << std::endl;
    std::cout << "\n3x --> (3 * x)" << std::endl;
    std::cout << "\n3x + y --> (3 * x) + y" << std::endl;
    std::cout << "\nx + y over 7 --> (x + y) / 7" << std::endl;
    std::cout << "\n3x + y over z + 2 --> ((3 * x) + y) / (z + 2)" << std::endl;
}

void selfTestFive()
{

    std::cout
        << "What is the output of the following program lines when they are embedded in a correct program that declares all variables to be of type char? \na = 'b'\nb = 'c'\nc = a\ncout << a << b << c << \'c\'"
        << std::endl;
    std::cout << std::endl;

    char a = 'b';
    char b = 'c';
    char c = a;

    std::cout << a << b << c << 'c';
}

void selfTestSix()
{

    std::cout
        << "What is the output of the following program lines when they are embedded in a correct program that declares number to be of type int?  \nnumber = (1/3) * 3;\ncout << \"(1/3) * 3 is equal to \" << number;"
        << std::endl;
    std::cout << std::endl;

    int number = (1 / 3) * 3;
    std::cout << "1/3 * 3 is equal to " << number << std::endl;
}

void selfTestSeven()
{

    std::cout
        << "Write a complete C++ program that reads two whole numbers into two variables of type int and then outputs both the whole number part and the remainder when the first number is divided by the second. This can be done using the operators / and %"
        << std::endl;
    std::cout << std::endl;

    int number1 = 5;
    int number2 = 3;
    int divInts = number1 / number2;
    int remainder = number1 % number2;
    std::cout << number1 << " divided by " << number2 << " is " << divInts << std::endl;
    std::cout << "The remainder is " << remainder << std::endl;
}

void selfTestEight()
{

    std::cout
        << "Given the following fragment that purports to convert from degrees Celsius to degrees Fahrenheit, answer the following questions:\n"
        << "\na. What value is assigned to f?"
        << "\nb. Explain what is actually happening, and what the programmer likely wanted."
        << "\nc. Rewrite the code as the programmer intended."
        << std::endl;
    std::cout << std::endl;

    double c1 = 20;
    double f1;
    f1 = (9 / 5) * c1 + 32.0;
    std::cout << "question a: f is assigned value: " << f1 << "\n"
              << std::endl;
    std::cout << "question b: What is happening is that 9/5 yields 1 as these are both ints. The programmer likely wanted instead to include the remainder of the division and should've made those doubles\n"
              << std::endl;

    double c2 = 20.0;
    double f2;
    f2 = (9.0 / 5.0) * c2 + 32.0;
    std::cout << "question c: Make the ints 9 and 5 doubles instead of 9.0 and 5.0, which returns " << f2 << std::endl;
}

int main()
{
    int randomInt = 5;
    std::cout << randomInt.size() << std::endl;
    bool validChoice = true;
    do
    {
        int functionChoice = chooseQuestion();

        switch (functionChoice)
        {
        case (1):
            selfTestOne();
            validChoice = true;
            break;

        case (2):
            selfTestTwo();
            validChoice = true;
            break;

        case (3):
            selfTestThree();
            validChoice = true;
            break;

        case (4):
            selfTestFour();
            validChoice = true;
            break;

        case (5):
            selfTestFive();
            validChoice = true;
            break;

        case (6):
            selfTestSix();
            validChoice = true;
            break;

        case (7):
            selfTestSeven();
            validChoice = true;
            break;

        case (8):
            selfTestEight();
            validChoice = true;
            break;

        default:
            validChoice = false;
            std::cout << "\a";
            std::cout << "That is not a valid selection. ONE TO EIGHT OKKK" << std::endl;
            break;
        }
    } while (validChoice == false);

    return 0;
}