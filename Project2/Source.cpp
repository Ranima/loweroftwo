#include <iostream>

struct Player
{
	char name = ("bill");
	int health = 100;
	int score = 0;
	float x = 0, y = 0, z = 0;
	float velocity = 0;
};

struct rectangle
{
	int x1 = 5, y1 = 5;
	int x2 = 5, y2 = -5;
	int x3 = -5, y3 = -5;
	int x4 = -5, y4 = 5;
	int red = 255, green = 0, yellow = 0;
};

void main() {
	Player user;
	user.health = 100;
	user.name = 0;
	printf("Give your player a name...\n");
	scanf_s("%c", user.name);
	printf("And a score...\n");
}