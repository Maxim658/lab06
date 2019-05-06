#pragma once
#include "Alive.h"
#include <iostream>
using namespace std;

class Animal : public Alive
{
protected:
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
