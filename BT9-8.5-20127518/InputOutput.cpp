#include "StudentStruct.h"
#include "InputOutput.h"
#include "Process.h"

void inputStudent(ST &st) {
	cin.ignore(32767, '\n');
	cout << "Full name: ";
	cin.getline(st.fullname, 31);
	cout << "Date of birth: ";
	cin >> st.dayofbirth;
	cout << "Sex: ";
	cin >> st.sex;
	do {
		cout << "Mark Literature, Math and English: ";
		cin.ignore(32767, '\n');
		cin >> st.mL >> st.mM >> st.mE;
	} while (st.mL < 0 || st.mL > 10 || st.mM < 0 || st.mM > 10 || st.mE < 0 || st.mE > 10);
	markAverage(st);
}

void inputN(int &n) {
	do {
		cout << "Enter number of students: ";
		cin >> n;
	} while (n <= 0);
}

void inputNStudent(ST a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "\nEnter student " << i + 1 << ": " << endl;
		inputStudent(a[i]);
	}
}
void outputName(ST g) {
	cout << g.fullname << endl;
}

void output(ST g[], int count) {
	arrangeMarkAverage(g, count);
	cout << "\nList of good students: " << endl;
	for (int i = 0; i < count; i++) {
		cout << i + 1 << ". ";
		outputName(g[i]);
	}
}



