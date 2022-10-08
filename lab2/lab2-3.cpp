#include <iostream>
using namespace std;

int main() {
	cout << "Enter a integer: ";
	int n;
	cin >> n;
	bool is_prime;
	if (n<=3) {
		is_prime = n>1;
	}
	else {
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				is_prime = false;
				break;
			}
			is_prime = true;
		}
	}

	cout << n;
	if (is_prime) {
		cout << " is prime";
	}
	else {
		cout << " is not prime";
	}
	return 0;
}