#include <iostream>
#include <vector>
using namespace std;

void clear_input() {
	string input;
	cin.clear();
	cin.sync();
	cin >> input;
}
bool is_subset(vector<int> v1, vector<int>v2) {
	int same = 0;
	for (int i : v2) {
		for (int j : v1) {
			if (i == j) {
				same++;
			}
		}
	}
	if (same == v2.size()) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	vector<int> v1, v2;
	int num;
	cout << "Enter the first array of integer. Enter 'done' to end input" << endl;
	while (cin >> num) {
		v1.push_back(num);
	}
	clear_input();
	cout << "Enter the second array of integer. Enter 'done' to end input" << endl;
	while (cin >> num) {
		v2.push_back(num);
	}

	if (is_subset(v1, v2)) {
		cout << "The second array is the first array's subset";
	}
	if (is_subset(v2, v1)) {
		cout << "The first array is the second array's subset";
	}
	return 0;
}