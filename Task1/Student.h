#pragma once
#include <iostream>
using namespace std;
class Student
{
protected:
	char fac[20];
	char spec[30];
	char name[15];
	int course;
	int group;
public:
	Student();
	Student(const char *f, const char *s, const char *n, int co, int g);
	void print();
};