#include <iostream>
#include "Cat.h"
using namespace std;

Cat::Cat()
{
	strcpy_s(name, "");
	pos_x = 0;
	pos_y = 0;
	health = 50;
	speed = 0;
	strcpy_s(noise, "Meow");
	strcpy_s(owner, "");
}
Cat::Cat(const char *n, int x, int y, int hp, int s, const char *noi, const char *ow)
{
	strcpy_s(name, n);
	pos_x = x;
	pos_y = y;
	health = hp;
	speed = s;
	strcpy_s(noise, noi);
	strcpy_s(owner, ow);
}
void Cat::Meow()
{
	cout << "Mrr " << noise << noise;
}
void Cat::print()
{
	cout << endl << "name: " << name << " health: " << health << " pos_x: " << pos_x << " pos_y: " << pos_y <<
		" speed: " << speed << " noise: " << noise << " owner: " << owner;
}
void Cat::crawl(int x, int y)
{
	pos_x++;
	pos_y++;
}
void Cat::walk(int x, int y)
{
	pos_x += x * speed;
	pos_y += y * speed;
}