#include <iostream>
#include <sstream>
#include <cmath>
#include <ctime>

/*
*	This project is a little practice project. I need to run through the 
*	basic concepts of C++. And I do a little practce functions/programs 
*	to get the bare minimum. 
*
*/

// Definations
void hypotenuse_calculator_func();
void basic_calculator_func();
void is_it_even_or_odd();
void random_number_between(int max);
void guess_game();

int main() {
	guess_game();
}

void hypotenuse_calculator_func() {
	float a, b, c;

	std::cout << "\t\t\t\t\t\t\tHi!\n";
	std::cout << "This is the hypotenuse calculator function!\n";
	std::cout << "Please enter a: ";
	std::cin >> a;
	std::cout << "Pleasse enter b: ";
	std::cin >> b;
	
	// Calculation: 
	c = sqrt(pow(a, 2) + pow(b, 2));
	std::cout << "\nThe result is " << c << "\n";
}

void basic_calculator_func() {
	int a, b, result;
	char op;

	std::cout << "\t\t\t\t\t\t\tHi!\n";
	std::cout << "This is the simple calculator function!\n";
	std::cout << "What is A: ";
	std::cin >> a;
	std::cout << "What is the operator what you want to use: ";
	std::cin >> op;
	std::cout << "What is B: ";
	std::cin >> b;

	switch (op) {
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	case '*':
		result = a * b;
		break;
	case '/':
		result =  a / b;
		break;
	default:
		result = NULL;
	}

	if (result == NULL) {
		std::cout << "The operator is invalid!";
	} else {
		std::cout << "Result is: " << result;
	}
}

void is_it_even_or_odd() {
	int input;

	std::cout << "\t\t\t\t\t\t\tHi!\n";
	std::cout << "This is the simple calculator function!\n";

	std::cout << "Enter a number: ";
	std::cin >> input;

	input % 2 ? std::cout << "ODD" : std::cout << "EVEN";
}

void random_number_between(int max) {
	srand(time(NULL));
	int number = (rand() % max) + 1;
	std::cout << number;

}

void guess_game() {
	std::cout << "\t\t\t\t\t\t\tHi!\n";
	std::cout << "This is the quess game\n";
	
	bool is_game_running = true;
	int number;

	while (is_game_running) {
		srand(time(NULL));
		number = (rand() % 100) + 1;
		bool succes = false;
		std::cout << "I have the number! Let's get started\n";
		
		while (!succes) {
			std::cout << "Guess: ";
			
			int guess;
			std::cin >> guess;

			if (guess == number) {
				succes = true;
			}
			else if (number < guess) {
				std::cout << "Nope! But your the real number is lower!\n";
			}
			else if (number > guess) {
				std::cout << "Nope! But your the real number is higher!\n";
			}
		}

		int answare;

		std::cout << "Congrats YOU DID IT!!\n";
		std::cout << "Do you want to play one more time? (1 yes 2 no)";
		std::cin >> answare;
		
		switch (answare) {
		case 1: 
			std::cout << "Cool! ";
			break;
		case 2: 
			std::cout << "Thank for palying! ";
			is_game_running = false;
			break;
		default:
			std::cout << "I am so lazy to prorgram this...So that's it";
			is_game_running = false;
		}

	}

	std::cout << "By";
}
