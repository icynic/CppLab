#include <iostream>
#include <vector>
using namespace std;

int main() {
	int length;
	cout << "Enter the length of arrays: ";
	cin >> length;

	srand((unsigned)time(NULL));
	vector<int> v1, v2;
	for (int i = 0; i != length; i++) {
		v1.push_back(rand() % 100);
		v2.push_back(rand() % 100);
	}
	cout << "The arrays are: " << endl;

	for (int i : v1) {
		cout << i << " ";
	}
	cout << endl;
	for (int i : v2) {
		cout << i << " ";
	}
	cout << endl;

	int count = 0;
	for (int i : v1) {
		for (int j : v2) {
			if (i == j) {
				count++;
				break;
			}
		}
	}
	cout << "There are " << count << " numbers in common";
	return 0;
}