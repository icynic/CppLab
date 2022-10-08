#include <iostream>
using namespace std;

int main() {
	cout << "Enter a numer of row: ";
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0) {
			for (int b = (n - i); b >= 1; b--) {
				cout << " ";
			}
			for (int j = 1; j <= i; j++) {
				cout << "* ";
			}
			cout << endl;
		}
	}
	return 0;
}