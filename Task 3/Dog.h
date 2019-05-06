#pragma once
#include "Animal.h"

class Dog : public Animal
{
protected:
	char owner[15];
public:
	Dog();
	Dog(const char *n, int x, int y, int hp, int s, const char *noi, const char *ow);
	void Bark();
	void print();
	void walk(int x, int y);
	void run(int x, int y);
};