#include <iostream>
#include <string>
#include <fstream>

int main ()
{
    std::string str;
    std::string check;
    std::cin >> check;
    std::ifstream fin;
    fin.open("Strings.txt");

    while (!fin.eof())
    {
        fin >> str;
        if (check == str) 
        { 
            std::cout << "Yes";
            break; 
        }
    }
}