// BroCode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>

int main()
{
    std::string name;
    int age;
    std::cout << "Type your full name: ";
    std::getline(std::cin, name);
    
    std::cout << "Type your age: ";
    std::cin >> age;

    std::cout << "Your name is: " << name << " and your age is: " << age << "\n";

}

