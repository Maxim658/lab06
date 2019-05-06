#pragma once
#include <iostream>
#include "Student.h"
using namespace std;

class Leader :public Student
{
protected:
	double mid_grade;
	int pension;
public:
	Leader(const char *f, const char *s, const char *n, int co, int g, double m_gr, int p);
	void print();
	void change_pension(int delta);
	double get_mid_grade();
};