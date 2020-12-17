#include "InputOutput.h"
void inputString(char s[]) {
	cout << "Nhap chuoi = ";
	cin.getline(s, 101);
}

void outputString(char s[]) {
	cout << s << endl;
}