#include "Matrix.h"
int main() {
	Matrix a, b;
	cout << "Input first matrix:\n" << endl;
	a.input();
	cout << "Input second matrix:\n" << endl;
	b.input();
	
	if (a.matrix == b.matrix) {
		cout << "They are equal" << endl;
	}
	else {
		cout << "They are not equal" << endl;
	}
	return 0;
}