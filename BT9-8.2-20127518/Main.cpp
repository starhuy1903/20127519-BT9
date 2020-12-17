#include "InputOutput.h"
#include "Count.h"
int main() {
	char s[Max], letter[Max];
	int counter = 0;
	int appear[Max];
	inputString(s);
	check(s, letter, appear, counter);
	output(letter, appear, counter);
	return 0;
}