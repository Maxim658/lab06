#pragma once
#include "Animal.h"

class Cat : public Animal
{
protected:
	char owner[15];
public:
	Cat();
	Cat(const char *n, int x, int y, int hp, int s, const char *noi, const char *ow);
	void Meow();
	void print();
	void crawl(int x, int y);
	void walk(int x, int y);
};