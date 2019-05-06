#include "pch.h"
#include <iostream>
#include "Student.h"
#include "Leader.h"
using namespace std;

int main()
{
	system("chcp 1251");
	system("cls");

	Student s("МТ", "AMСП", "Сидоров", 3, 4);
	Student *p = &s;
	p->print();

	Leader l("ЛТ", "УЛА", "Леонов", 3, 4, 4.2, 3000);
	Leader *n = &l;
	n->print();
	n->change_pension(200);
	n->print();
	cout << endl << "Mid Grade: "<< n->get_mid_grade();
}
