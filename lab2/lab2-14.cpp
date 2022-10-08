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
		sum = sum + pow(vi[i],length);
	}
	if (num_origin == sum) {
		return true;
	}
	return false;
}

int main() {
	cout << "Enter a number to check if it is armstrong: ";
	int n;
	cin >> n;
	cout << n;
	if (is_strong(n)) {
		cout << " is armstrong";
	}else{
		cout << " is not armstrong";
}
	return 0;
}