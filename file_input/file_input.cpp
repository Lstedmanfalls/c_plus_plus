#include <fstream>
#include <iostream>
#include <string>

int main()
{

    int score;
    std::string firstName;
    std::fstream inputstream;

    inputstream.open("test_file.txt");
    while (inputstream)
    {
        inputstream >> score;
        inputstream >> firstName;
        std::cout << firstName << ":" << score << std::endl;
        // eof = end of file
        if (inputstream.eof())
            break;
    }

    inputstream.close();

    return 0;
}