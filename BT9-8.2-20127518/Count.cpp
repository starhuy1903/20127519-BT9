#include "InputOutput.h"
#pragma warning(disable:4996)
bool exist(char c, char letter[], int appear[], int counter) {
	for (int i = 0; i < counter; i++) {
		if (c == letter[i]) {
			appear[i]++;
			return true;
		}
	}
	return false;
}
void check(char s[], char letter[], int appear[] , int &counter) {
	strlwr(s);
	char c;
	for (int i = 0; i < strlen(s); i++) {
		c = s[i];
		if (s[i] == ' ') continue;
		if (!exist(c, letter, appear, counter)) {
			letter[counter] = c;
			appear[counter] = 1;
			counter++;
		}
	}
}

int maxAppear(int appear[], int counter) {
	int max = appear[0];
	for (int i = 1; i < counter; i++ ) {
		if (max < appear[i]) {
			max = appear[i];
		}
	}
	return max;
}

bool checkAppear(int appear[], int counter, int max) {
	for (int i = 0; i < counter; i++) {
		if (appear[i] == max) return true;
	}
	return false;
}