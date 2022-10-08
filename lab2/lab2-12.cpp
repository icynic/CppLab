#include <iostream>
using namespace std;

int main() {
	cout << "Enter two integers: ";
	int num1, num2, temp;
	cin >> num1 >> num2;
	if (num1 > num2) {
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	for (int i = num1; i > 0; i--) {
		if (num1 % i == 0 && num2 % i == 0) {
			cout << "The greatest common divisor is: " << i;
			break;
		}
	}
	return 0;
}