#pragma once
#include <iostream>
using namespace std;

class Animal
{
protected:
	int health;
	char name[15];
	int pos_x;
	int pos_y;
	int speed;
	char noise[10];
public:
	Animal();
	Animal(const char *n, int x, int y, int hp, int s, const char *noi);
	void move(int x, int y);
	char* make_noise();
	void eat();
	void print();
};