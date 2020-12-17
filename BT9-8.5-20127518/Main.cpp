#include "StudentStruct.h"
#include "InputOutput.h"
#include "Process.h"

int main() {
	int n, count(0);
	inputN(n);
	ST g[Max];
	ST st[Max];
	inputNStudent(st, n);
	checkGoodStudent(st, n, g, count);
	output(g, count);
	return 0;
}