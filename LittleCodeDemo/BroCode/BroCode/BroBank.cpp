#include <iostream>
#include <sstream>
#include <cmath>
#include <ctime>


/*
*	This is a simple ATM app. Please note, this is not a full project just a 
*	simple C++ app. I am not using any OOP or complex thing
* 
*/

// Declarations
void bank_app();
void sign_in();
void card_ejected();

// Global variables
bool atm_is_on = true;
bool loged_in = false;
int sign_in_attempt = 0;
int actions = 0;

// "Data base"

int main() {
	while(atm_is_on) {
		bank_app();
	}
	std::cout << "Unfortunatly Bro ATM is under maintanence";
}

// Definations
void bank_app() {
	sign_in();
}

void sign_in() {
	
	std::string user_input;

	if (sign_in_attempt == 3) {
		card_ejected();
	}
	else {
		std::cout << "Plase insert your PIN Code: ";
		std::cin >> user_input;

	}

	

}


void card_ejected() {
	std::cout << "The card is ejected! \n";
	std::cout << "* The user put the card again * \n";
	sign_in();
}