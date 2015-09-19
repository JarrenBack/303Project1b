#pragma once
class Term
{
public:
	Term(int coe = 1, int exp = 0);
	bool operator < (Term rhs);
	void setExponent(const int exp);
	void setCoefficient(const int coe);
	const int getExponent();
	const int getCoefficient();
private:
	int exponent;
	int coefficient;

};