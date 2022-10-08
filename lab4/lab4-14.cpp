#include <stdio.h>
const int max = 100;
void rec(int row1, int col1, int A[][max], int row2, int col2, int B[][max], int C[][max]) {
	static int i = 0, j = 0, k = 0;
	if (i >= row1) {
		return;
	}
	if (j < col2) {
		if (k < col1) {
			C[i][j] += A[i][k] * B[k][j];
			k++;
			rec(row1, col1, A, row2, col2,
				B, C);
		}
		k = 0;
		j++;
		rec(row1, col1, A, row2, col2, B, C);
	}
	j = 0;
	i++;
	rec(row1, col1, A, row2, col2, B, C);
}
void multiply(int row1, int col1, int A[][max], int row2, int col2, int B[][max]) {
	if (row2 != col1) {
		return;
	}
	int C[max][max] = { 0 };
	rec(row1, col1, A, row2, col2, B, C);
	for (int i = 0; i < row1; i++) {
		for (int j = 0; j < col2; j++) {
			printf("%d  ", C[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int m1[][max] = { {1, 2, 3},
					{4, 5, 6},
					{7, 8, 9} };
	int m2[][max] = { {1, 2, 3},
					{4, 5, 6},
					{7, 8, 9} };
	int row1 = 3, col1 = 3, row2 = 3, col2 = 3;
	multiply(row1, col1, m1, row2, col2, m2);
	return 0;
}