#include <iostream>
using namespace std;

void f(int num, int &sum) {
	sum++;
	if (num / 10 != 0) {
		f(num / 10, sum);
	}
}

int main() {
	int num, sum = 0;
	cout << "Enter a number: ";
	cin >> num;
	f(num, sum);
	cout << sum;
	return 0;
}