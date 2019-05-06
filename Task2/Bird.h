#pragma once
#include "Alive.h"
#include <iostream>
using namespace std;

class Bird : public Alive
{
protected:
	int speed;
	int height;
	char noise[10];
public:
	Bird();
	Bird(const char *n, int x, int y, int hp, int s, int h, const char *noi);
	void fly(int x, int y, int z);
	char* make_noise();
	void eat();
	void print();
};