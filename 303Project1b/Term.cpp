#include "Term.h"

Term::Term(int coe, int exp)
{
	coefficient = coe;
	exponent = exp;
}

bool Term::operator < (Term rhs)
{
	if (exponent < rhs.exponent)
		return true;
	else if (coefficient < rhs.coefficient)
		return true;

	return false;

}

void Term::setExponent(const int exp)
{
	exponent = exp;
}
void Term::setCoefficient(const int coe)
{
	if (coe == 0)
		return;
	else coefficient = coe;

}
const int Term::getExponent()
{
	return exponent;
}
const int Term::getCoefficient()
{

	return coefficient;
}