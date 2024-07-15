#include <iostream>
#include <sstream>
#include <cmath>
#include <ctime>


/*
*	This is a simple ATM app. Please note, this is not a full project just a 
*	simple C++ app. Just a little practice.
* 
*/

// State varriables
bool quit = false;
int money = 0;


// Function Defenations 
void menu();
void print_menu();
void deposit();
void withdraw();
void balance();
void quit_func();

/*
int main() {
	while (!quit) {
		menu();
	}
	std::cout << "By!";
}
*/

void menu() {
	print_menu();
	
	int chosen_menu_point = 0;
	std::cin >> chosen_menu_point;

	switch(chosen_menu_point) {
	case 1:
		deposit();
		break;
	case 2:
		withdraw();
		break;
	case 3:
		balance();
		break;
	case 4: 
		quit_func();
		break;
	default:
		std::cout << "WTF??";
	}

	chosen_menu_point = 0;
}

void print_menu() {
	std::cout << "\t\t\t\t\t\t\t Bro Bank \n";
	std::cout << "------------------------------------------------------------------------------------------------------------------------\n";
	std::cout << "1: Deposit \n";
	std::cout << "2: Withdraw \n";
	std::cout << "3: Check the balance \n";
	std::cout << "4: Quit \n";
	std::cout << "------------------------------------------------------------------------------------------------------------------------\n";
}

void deposit() {
	int want_deposit = 0;
	std::cout << "Please insert the money amount!: ";
	std::cin >> want_deposit;
	money += want_deposit;
}

void withdraw() {
	int want_withdraw = 0;
	std::cout << "Please insert the money amount!: ";
	std::cin >> want_withdraw;
	if (want_withdraw <= money) {
		money -= want_withdraw;
	}
	else {
		std::cout << "You are broke! xd";
	}
}

void balance() {
	std::cout << "Money you have is: " << money;
}

void quit_func() {
	quit = true;
}