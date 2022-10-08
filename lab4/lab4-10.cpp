#include <iostream>
using namespace std;

void p(int* a, int* b, int& max) {
	if (max < *a) {
		max = *a;
	}
	if (a != b) {
		p(a + 1, b, max);
	}
}

int main() {
	int a[] = { 1,2,3,4,5,10,8 };
	for (int i : a) {
		cout << i << " ";
	}
	int* b = end(a) - 1;
	int max = a[0];
	p(a, b, max);
	cout << "\nMaximum is " << max;
}