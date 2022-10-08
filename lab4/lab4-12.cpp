#include <iostream>
using namespace std;

void f(int b, int e, char c) {
	if (c == 'o' && b <= e) {
		if (b % 2 != 0) {
			cout << b << " ";
		}
		f(b + 1, e, c);
	}
	else if (c == 'e' && b <= e) {
		if (b % 2 == 0) {
			cout << b << " ";
		}
		f(b + 1, e, c);
	}
}
int main() {
	int b, e;
	char c;
	cout << "Enter the begining: ";
	cin >> b;
	cout << "Enter the end: ";
	cin >> e;
	cout << "Enter 'o' to print odd numbers, 'e' to print even numbers" << endl;
	cin >> c;
	f(b, e, c);
	return 0;
}