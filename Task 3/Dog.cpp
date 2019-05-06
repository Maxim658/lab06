#include <iostream>
#include "Dog.h"
using namespace std;

Dog::Dog()
{
	strcpy_s(name, "");
	pos_x = 0;
	pos_y = 0;
	health = 50;
	speed = 0;
	strcpy_s(noise, "Waaf");
	strcpy_s(owner, "");
}
Dog::Dog(const char *n, int x, int y, int hp, int s, const char *noi, const char *ow)
{
	strcpy_s(name, n);
	pos_x = x;
	pos_y = y;
	health = hp;
	speed = s;
	strcpy_s(noise, noi);
	strcpy_s(owner, ow);
}
void Dog::Bark()
{
	cout << "Grrr" << noise << noise;
}
void Dog::print()
{
	cout << endl << "name: " << name << " health: " << health << " pos_x: " << pos_x << " pos_y: " << pos_y <<
		" speed: " << speed << " noise: " << noise << " owner: " << owner;
}
void Dog::walk(int x, int y)
{
	pos_x += x * speed;
	pos_y += y * speed;
}
void Dog::run(int x, int y)
{
	pos_x += x * speed * 3;
	pos_y += y * speed * 3;
}