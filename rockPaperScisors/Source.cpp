#include <iostream>
#include <cstdlib>

int randomNumber() {
	return rand() % 3 + 1;
}

//int whoWins() {
//
//}

void main() {
	int computerNumber = randomNumber();
	int playerNumber = 0;
	int isplaying = 0;
	printf("This is a game of rock paper scisors \n");
	while (isplaying == 0) {
		printf("Pick a number between 1 and 3 \n");
		printf("1 is rock, 2 is paper, and 3 is scisors\n");
		scanf_s("%d", &playerNumber);
		if (playerNumber == 1) {
			if (computerNumber == 1) { printf("Its a TIE!"); }
			if (computerNumber == 2) { printf("You LOSE"); isplaying = 1; }
			if (computerNumber == 3) { printf("You WIN!!"); isplaying = 1; }
		}
		if (playerNumber == 2) {
			if (computerNumber == 1) { printf("You WIN!!"); isplaying = 1; }
			if (computerNumber == 2) { printf("Its a TIE!"); }
			if (computerNumber == 3) { printf("You LOSE"); isplaying = 1; }
		}
		if (playerNumber == 3) {
			if (computerNumber == 1) { printf("You LOSE"); isplaying = 1; }
			if (computerNumber == 2) { printf("You WIN!!"); isplaying = 1; }
			if (computerNumber == 3) { printf("Its a TIE!"); }
		}
		else
		{
			printf("that number dosn't work");
		}
	}
	system("pause");
}