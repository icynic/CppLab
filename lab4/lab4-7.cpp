#include <iostream>
using namespace std;

void p(int* a, int* b) {
	cout << *a << " ";
	if (a != b) {
		p(a + 1, b);
	}
}

int main() {
	int a[] = { 1,2,3,4,5 };
	int* b = end(a) - 1;
	p(a, b);
}