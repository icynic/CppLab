#include "Matrix.h"
int main() {
	Matrix a;
	a.input();
	cout << "Its sum of left diagonals is: \n" << a.left_diagonal_sum() << endl;
	return 0;
}