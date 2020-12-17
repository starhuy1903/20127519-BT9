#include "FractionStruct.h"
#include "Process.h"
#include "InputOutput.h"
int main() {
	Fraction p, q;
	inputFraction(p);
	inputFraction(q);
	outputSum(p, q);
	outputProduct(p, q);
	outputReciprocal(p); outputReciprocal(q);
	outputIrreducibleFraction(p);
	outputIrreducibleFraction(q);
	return 0;
}