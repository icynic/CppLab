#include <iostream>
using namespace std;

int main() {
	cout << "Enter a numer of row: ";
	int n;
	cin >> n;
	bool c;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			c = false;
		}
		else {
			c = true;
		}
		for (int j = 1; j <= i; j++) {
			cout << int(c) << " ";
			c = !c;
		}
		cout << endl;
	}
	return 0;
}