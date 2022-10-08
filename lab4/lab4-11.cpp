#include <iostream>
using namespace std;

void p(char* a, char* b) {
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
	if (a != b) {
		p(a + 1, b);
	}
}

int main() {
	char a[] = {'a','b','c','d','e'};
	for (char c : a) {
		cout << c << " ";
	}
	char* b = ((end(a) - 1 - begin(a))/2+begin(a));
	p(a, b);
	cout << endl;
	for (char c : a) {
		cout << c << " ";
	}
}