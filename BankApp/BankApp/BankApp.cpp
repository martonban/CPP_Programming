#include <iostream>
#include "UserManager.h"

void mainMenu();

int main() {
    std::cout << "Welcome in the Delhion Bank System\n";
    mainMenu();
}

void mainMenu() {
    int chosenMenuPoint = 0;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "1 - Create a new user" << std::endl;
    std::cout << "2 - Get the user data" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "Command: ";
    std::cin >> chosenMenuPoint;
    

}


