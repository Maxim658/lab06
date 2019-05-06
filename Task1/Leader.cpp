#include "pch.h"
#include "Leader.h"

Leader::Leader(const char *f, const char *s, const char *n, int co, int g, double m_gr, int p)
{
	strcpy_s(fac, f);
	strcpy_s(spec, s);
	strcpy_s(name, n);
	course = co;
	group = g;
	mid_grade = m_gr;
	pension = p;
}
void Leader::print()
{
	cout << endl << "fac: " << fac << " spec: " << spec << " name: " << name << " course: " << course << " group: " << group
		<< " mid_grade: " << mid_grade << " pension: " << pension;
}
void Leader::change_pension(int delta)
{
	pension += delta;
}
double Leader::get_mid_grade()
{
	return mid_grade;
}