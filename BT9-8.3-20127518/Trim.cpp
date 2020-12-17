#include "Trim.h"
void erase(char s[], int vt) {
	int n = strlen(s);
	for (int i = vt + 1; i < n; i++) {
		s[i - 1] = s[i];
	}
	s[n - 1] = '\0';
}
 

void trimLeft(char s[]) {
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == ' ') {
			erase(s, i);
			i--;
		}
		else break;
	}
}

void trimRight(char s[]) {
	for (int i = strlen(s) - 1; i >= 0 ; i--) {
		if (s[i] == ' ') {
			erase(s, i);
			i--;
		}
		else break;
	}
}

void trimMidCharacter(char s[]) {
	for (int i = 0; i < strlen(s) - 1; i++) {
		if (s[i] == ' ' && s[i + 1] == ' ') {
			erase(s, i);
			i--;
		}
	}
}