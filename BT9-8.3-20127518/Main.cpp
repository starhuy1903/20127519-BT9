#include "InputOutput.h"
#include "Trim.h"

int main() {
	char s[Max];
	inputString(s);
	trimLeft(s);
	trimRight(s);
	trimMidCharacter(s);
	outputString(s);
}