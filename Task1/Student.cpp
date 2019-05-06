#include "pch.h"
#include "Student.h"

Student::Student()
{
	strcpy_s(fac, "");
	strcpy_s(spec, "");
	strcpy_s(name, "");
	course = 0;
	group = 0;

}
Student::Student(const char *f, const char *s, const char *n, int co, int g)
{
	strcpy_s(fac, f);
	strcpy_s(spec, s);
	strcpy_s(name, n);
	course = co;
	group = g;
}
void Student::print()
{
	cout << endl << "fac: " << fac << " spec: " << spec << " name: " << name << " course: " << course << " group: " << group;
}