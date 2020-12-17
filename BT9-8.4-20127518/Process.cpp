#include "FractionStruct.h"
#include "InputOutput.h"

int greatestCommomDivisor(int a, int b) { 
	if (a < 0) a = -a;
	if (b < 0) b = -b;
	while (a != 0 && b != 0) {
		if (a > b)
			a %= b;
		else
			b %= a;
	}
	return a + b;
}
Fraction reduce(Fraction p) {
	Fraction r;
	int gcd = greatestCommomDivisor(p.num, p.denom);
	r.num = p.num / gcd;
	r.denom = p.denom / gcd;
	return r;
}
Fraction add(Fraction p, Fraction q) {
	Fraction r;
	r.num = p.num * q.denom + p.denom * q.num;
	r.denom = p.denom * q.denom;
	return r;
}
Fraction multi(Fraction p, Fraction q) {
	Fraction r;
	r.num = p.num * q.num;
	r.denom = p.denom * q.denom;
	return r;
}
Fraction inversion(Fraction p) {
	Fraction r;
		r.num = p.denom;
		r.denom = p.num;
	return r;
}

