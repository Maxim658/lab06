#include "Fish.h"

Fish::Fish()
{
	strcpy_s(name, "");
	pos_x = 0;
	pos_y = 0;
	health = 50;
	speed = 0;
	depth = 0;
}
Fish::Fish(const char *n, int x, int y, int hp, int s, int d)
{
	strcpy_s(name, n);
	pos_x = x;
	pos_y = y;
	health = hp;
	speed = s;
	depth = d;
}
void Fish::swim(int x, int y, int z)
{
	pos_x += x * speed;
	pos_y += y * speed;
	depth += z * speed;
	health -= 1;
}
void Fish::eat()
{
	health += 5;
}
void Fish::print()
{
	cout << endl << "name: " << name << " health: " << health << " pos_x: " << pos_x << " pos_y: " << pos_y <<
		" speed: " << speed << " height: " << depth;
}