#include <iostream>
#include <sstream>
#include <cmath>
#include <ctime>

/*

	This a very simple Rock Paper Seaser game. No OOP no specail stuff

*/

// Function declaration
char robot_result();
int random_number();
void draw_rock();
void draw_paper();
void draw_scissors();
void evaluate(char c);

// Data filed
bool game_loop = false;


/*
int main() {
	std::cout << "\t\t\t\t\t\t\t BroRPS \n";
	while (!game_loop) {
		char chossen_play;
		std::cout << "Rock or Paper or Scissors? ";
		std::cin >> chossen_play;
		evaluate(chossen_play);
	}
}
*/

void evaluate(char c) {
	// 1 - Rock
	// 2 - Paper
	// 3 - Scissors
	int bot_result = random_number();
	
	// ROCK
	if (bot_result == 1) {
		std::cout << "The bot chosed: \n";
		draw_rock();
		if (c == 'r') {
			std::cout << "You chosed: \n";
			draw_rock();
			std::cout << "DRAW!\n";
		}
		else if (c == 'p') {
			std::cout << "You chosed: \n";
			draw_paper();
			std::cout << "You WON!\n";
		}
		else if (c == 's') {
			std::cout << "You chosed: \n";
			draw_scissors();
			std::cout << "You LOST!\n";
		}
		else {
			std::cout << "Invalid input";
		}
	}

	// PAPER
	if (bot_result == 2) {
		std::cout << "The bot chosed: \n";
		draw_paper();
		if (c == 'r') {
			std::cout << "You chosed: \n";
			draw_rock();
			std::cout << "You LOST!\n";
		}
		else if (c == 'p') {
			std::cout << "You chosed: \n";
			draw_paper();
			std::cout << "DRAW!\n";
		}
		else if (c == 's') {
			std::cout << "You chosed: \n";
			draw_scissors();
			std::cout << "You WIN!\n";
		}
		else {
			std::cout << "Invalid input";
		}
	}

	// SCISSORS
	if (bot_result == 3) {
		std::cout << "The bot chosed: \n";
		draw_scissors();
		if (c == 'r') {
			std::cout << "You chosed: \n";
			draw_rock();
			std::cout << "You WIN!\n";
		}
		else if (c == 'p') {
			std::cout << "You chosed: \n";
			draw_paper();
			std::cout << "You Lost!\n";
		}
		else if (c == 's') {
			std::cout << "You chosed: \n";
			draw_scissors();
			std::cout << "DRAW!\n";
		}
		else {
			std::cout << "Invalid input";
		}
	}
	std::cout << "----------------------------------------\n";
}

int random_number() {
	srand(time(NULL));
	return (rand() % 3) + 1;
}

void draw_rock() {
	std::cout << "    _______ \n";
	std::cout << "---'   ____)\n";
	std::cout << "      (_____)\n";
	std::cout << "      (_____)\n";
	std::cout << "      (____)\n";
	std::cout << "---.__(___)\n";
}


void draw_paper() {
	std::cout << "     _______\n";
	std::cout << "---'    ____)____\n";
	std::cout << "           ______)\n";
	std::cout << "          _______)\n";
	std::cout << "         _______)\n";
	std::cout << "---.__________)\n";
}

void draw_scissors() {
	std::cout << "   _______\n";
	std::cout << "---'   ____)____\n";
	std::cout << "          ______)\n";
	std::cout << "       __________)\n";
	std::cout << "      (____)\n";
	std::cout << "---.__(___)\n";
}