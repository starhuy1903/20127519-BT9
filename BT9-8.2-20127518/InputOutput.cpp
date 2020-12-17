#include "InputOutput.h"
#include "Count.h"
void inputString(char s[]) {
	cout << "Nhap chuoi = ";
	cin.getline(s, 101);
}


void output(char letter[], int appear[], int counter) {
	int max = maxAppear(appear, counter);
	for (int i = max; i > 0; i--) {
		if (checkAppear(appear, counter, i)) { 
			cout << i <<": ";
			for (int j = 0; j < counter; j++) {
				if (appear[j] == i) {
					cout << letter[j] <<" ";
				}				
			}
			cout << endl;
		}
	
	}
}