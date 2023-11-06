#include "Pair.h"

void Pair::setPair(double a, double b)
{
	first = a;
	second = b;
}

double Pair::getProduct() const
{
	return first * second;
}
