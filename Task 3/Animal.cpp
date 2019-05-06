#include <iostream>
#include "Animal.h"
using namespace std;

Animal::Animal()
{
	strcpy_s(name, "");
	pos_x = 0;
	pos_y = 0;
	health = 50;
	speed = 0;
	strcpy_s(noise, "");
}
Animal::Animal(const char *n, int x, int y, int hp, int s, const char *noi)
{
	strcpy_s(name, n);
	pos_x = x;
	pos_y = y;
	health = hp;
	speed = s;
	strcpy_s(noise, noi);
}
void Animal::move(int x, int y)
{
	pos_x += x * speed;
	pos_y += y * speed;
}
char* Animal::make_noise()
{
	return noise;
}
void Animal::eat()
{
	health += 10;
}
void Animal::print()
{
	cout << endl << "name: " << name << " health: " << health << " pos_x: " << pos_x << " pos_y: " << pos_y <<
		" speed: " << speed << " noise" << noise;
}