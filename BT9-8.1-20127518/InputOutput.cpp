#include "InputOutput.h"
void inputString(char s[], char t[]) {
	cout << "Nhap S = ";
	cin.getline(s, 101);
	cout << "Nhap T = ";
	cin.getline(t, 101);
}

void outputString(char s[]) {
	cout << "Kiem duyet = " << s << endl;
}
