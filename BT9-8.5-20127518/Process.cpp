#include "StudentStruct.h"
#include "InputOutput.h"

void markAverage(ST& st) {
	st.mAver = (st.mL + st.mM + st.mE) / 3;
}

void arrangeMarkAverage(ST g[], int count) {
	ST temp;
	for (int i = 0; i < count - 1; i++) {
		for (int j = i + 1; j < count; j++) {
			if (g[i].mAver < g[j].mAver) {
				temp = g[i];
				g[i] = g[j];
				g[j] = temp;
			}
		}
	}
}

void checkGoodStudent(ST st[], int n, ST g[], int &count) {
	for (int i = 0; i < n; i++) {
		if (st[i].mAver >= 8) {
			g[count++] = st[i];
		}
	}
}