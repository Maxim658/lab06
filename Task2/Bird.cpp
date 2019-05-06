#include "Bird.h"

Bird::Bird()
{
	strcpy_s(name, "");
	pos_x = 0;
	pos_y = 0;
	health = 50;
	speed = 0;
	height = 0;
	strcpy_s(noise, "");
}
Bird::Bird(const char *n, int x, int y, int hp, int s, int h, const char *noi)
{
	strcpy_s(name, n);
	pos_x = x;
	pos_y = y;
	health = hp;
	speed = s;
	height = h;
	strcpy_s(noise, noi);
}
void Bird::fly(int x, int y, int z)
{
	pos_x += x * speed;
	pos_y += y * speed;
	height += z * speed;
	health -= 1;
}
char* Bird::make_noise()
{
	return noise;
}
void Bird::eat()
{
	health += 5;
}
void Bird::print()
{
	cout << endl << "name: " << name << " health: " << health << " pos_x: " << pos_x << " pos_y: " << pos_y <<
		" speed: " << speed << " height: " << height << " noise" << noise;
}