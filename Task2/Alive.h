#pragma once
#include <iostream>
using namespace std;

class Alive
{
protected:
	int health;
	char name[15];
	int pos_x;
	int pos_y;
public:
	Alive();
	Alive(const char *n, int x, int y, int hp);
	void move(int x, int y);
	void print();
};