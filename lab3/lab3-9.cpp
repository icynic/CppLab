#include <iostream>
#include <vector>
using namespace std;
int main() {
	cout << "Enter a number: ";
	int num;
	cin >> num;
	vector<int> result;
	while (num != 0) {
		result.push_back( num % 2);
		num = num / 2;
	}
	cout << "The binary number is: " << endl;
	for (int i = result.size()-1; i >= 0;i--) {
		cout << result[i];
	}
	return 0;
 }