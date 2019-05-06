#include "Alive.h"

Alive::Alive()
{
	strcpy_s(name, "");
	pos_x = 0;
	pos_y = 0;
	health = 50;
}
Alive::Alive(const char *n, int x, int y, int hp)
{
	strcpy_s(name, n);
	pos_x = x;
	pos_y = y;
	health = hp;
}
void Alive::move(int x, int y)
{
	pos_x += x;
	pos_y += y;
}
void Alive::print()
{
	cout << endl << "name: " << name << " health: " << health << " pos_x: " << pos_x << " pos_y: " << pos_y;
}