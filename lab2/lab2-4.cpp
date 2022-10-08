#include <iostream>
using namespace std;

bool is_prime(int j) {
		if (j <= 3) {
			return j > 1;
		}
		else {
			for (int i = 2; i < j; i++) {
				if (j % i == 0) {
					return false;
				}	
			}
			return true;
		}
}
int main() {
	cout << "Enter two integer as the range: ";
	int n,m;
	cin >> n>>m;
	if (n > m) {
		n = n + m;
		m = n - m;
		n = n - m;
	}
	cout << "The prime numbers are:" << endl;
	for (int i = n; i <= m; i++) {
		if (is_prime(i)) {
			cout << i<<" ";
		}
	}
	return 0;
}