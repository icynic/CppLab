#include <iostream>
#include <vector>
using namespace std;

int factorial(int n) {
	int product = 1;
	for (int i = 1; i <= n; i++) {
		product = product * i;
	}
	return product;
}
bool is_strong(int num_origin) {
	vector<int> vi;
	int num = num_origin, sum = 0, length = 0;
	while (num) {
		vi.push_back(num % 10);
		num = num / 10;
		length++;
	}
	for (int i = 0; i < length; i++) {
		sum = sum + factorial(vi[i]);  
	}
	if (num_origin == sum) {
		return true;
	}
	return false;
}

int main() {
	cout << "Enter a number: ";
	int n;
	cin >> n;
	cout << "The strong numbers within [1,n] are: ";
	for (int i = 1; i <= n; i++) {
		if (is_strong(i)) {
			cout << i << " ";
		}
	}
	return 0;
}