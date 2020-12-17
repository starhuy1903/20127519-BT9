#include "Find and Replace.h"
#include "InputOutput.h"
int main() {
	char s[Max];
	char t[Max];
	char s2[] = "###";
	inputString(s, t);
	replace(s, t, s2);
	outputString(s);
	return 0;
}