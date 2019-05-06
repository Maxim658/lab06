#pragma once
#include "Alive.h"
#include <iostream>
using namespace std;

class Fish : public Alive
{
protected:
	int speed;
	int depth;
public:
	Fish();
	Fish(const char *n, int x, int y, int hp, int s, int d);
	void swim(int x, int y, int z);
	void eat();
	void print();
};