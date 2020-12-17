#include "FractionStruct.h"
#include "Process.h"
#include "InputOutput.h"
void inputFraction(Fraction& p) {
	do {
		cout << "Enter Fraction: ";
		cin >> p.num >> p.denom;
	} while (p.denom == 0);
}
void outputSum(Fraction p, Fraction q) {
	if (p.num == 0 && q.num == 0) cout << "Sum: 0" << endl;
	else {
		Fraction r = add(p, q);
		if (r.num % r.denom == 0) cout << "Sum: " << r.num / r.denom << endl;
		else if (r.denom == 1) cout << "Sum: " << r.num << endl;
		else cout << "Sum: " << r.num << "/" << r.denom << endl;
	}
}
void outputProduct(Fraction p, Fraction q) {
	if (p.num == 0 || q.num == 0) cout << "Product: 0" << endl;
	else {
		Fraction r = multi(p, q);
		if (r.num % r.denom == 0) cout << "Product: " << r.num / r.denom << endl;
		else if (r.denom == 1) cout << "Product: " << r.num << endl;
		else cout << "Product: " << r.num << "/" << r.denom << endl;
	}
}

void outputError() {
	cout << "Error" << endl;
}
void outputReciprocal(Fraction p) {
	if (p.num != 0) {
		Fraction r = inversion(p);
		cout << "Reciprocal: ";
		if (r.denom == 1) cout << r.num << endl;
		else cout << r.num << "/" << r.denom << endl;
	}
	else {
		cout << "Reciprocal: ";
		outputError();
	}
}

void outputIrreducibleFraction(Fraction p) {
	if (p.num != 0) {
		Fraction r = reduce(p);
		cout << "Irreducible Fraction: ";
		cout << r.num << "/" << r.denom << endl;
	}
	else {
		cout << "Irreducible Fraction: ";
		outputError();
	}
}


