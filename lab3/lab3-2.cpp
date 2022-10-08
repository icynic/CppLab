#include <iostream>
#include <vector>
using namespace std;

vector<int> unique(vector<int> v1) {
	vector<int> v_unique;
	for (int i : v1) {
		bool is_exsit = false;
		for (int j : v_unique) {
			if (i == j) {
				is_exsit = true;
			}
		}
		if (is_exsit == false) {
			v_unique.push_back(i);
		}
	}
	return v_unique;
}

int main() {
	vector<int> vi;
	int num;
	cout << "Enter an array of integer. Enter 'done' to end input" << endl;
	while (cin >> num) {
		vi.push_back(num);
	}
	cout << "The unique elements are: " << endl;
	for (int i : unique(vi)) {
		cout << i << " ";
	}
	return 0;
}