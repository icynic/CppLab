#include <iostream>
using namespace std;

int main() {
	cout << "Enter a number: ";
	int n, sum=0;
	cin >> n;
	cout << "The first " << n << " natural number is:" << endl;
	for (int i = 1; i <= n; i++) {
		cout << i << " ";
		sum = sum + i;
	}
	cout << "\nThe sum is: " << sum;
	return 0;
}