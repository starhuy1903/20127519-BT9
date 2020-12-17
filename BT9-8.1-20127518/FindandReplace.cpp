#include "InputOutput.h"
#include "Find and Replace.h"
#pragma warning(disable:4996)

void find(char s[], char t[], int& j, int& position) {
	while (t[j] && s[position] == t[j]) {
		position++;
		j++;
	}
}
void replace(char s[], char t[], char s2[]) {
	int i = 0, position;
	int n = strlen(s);
	int nt = strlen(t);
	int n2 = strlen(s2);
	while (s[i]) {
		int j = 0;
		position = i;
		find(s, t, j, position);
		if (j == nt)
		{
			memmove(s + i + n2, s + i + nt, n - nt - i + 1);
			strncpy(s + i, s2, n2);
			i += n2;
			n += n2 - nt;
		}
		else i++;
	}
}