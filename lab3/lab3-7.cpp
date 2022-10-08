#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<int> vi;
	int num;
	cout << "Enter an array of integer. Enter 'done' to end input" << endl;
	while (cin >> num) {
		vi.push_back(num);
	}

	string input;
	cin.clear();
	cin.sync();
	cin >> input;

	int p;
	cout << "Enter a position(starting with 1): ";
	cin >> p;

	vi.erase(vi.begin()+p-1);
	cout << "The new array is: " << endl;
	for (int i : vi) {
		cout << i << " ";
	}
	return 0;
}