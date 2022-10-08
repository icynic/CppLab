# include <iostream>
# include <vector>
using namespace std;

vector<int> sort(vector<int> v_origin) {
	vector<int> result;
	int temp;
	for (auto i = v_origin.begin(); i != v_origin.end() - 1; i++) {
		for (auto it = i + 1; it != v_origin.end(); it++) {
			if (*i < *it) {
				temp = *i;
				*i = *it;
				*it = temp;
			}
		}
	}
	return v_origin;
}

void clear_input() {
	string input;
	cin.clear();
	cin.sync();
	cin >> input;
}

int main() {
	vector<int> vi;
	int num;
	cout << "Enter an array of integer. Enter 'done' to end input" << endl;
	while (cin >> num) {
		vi.push_back(num);
	}
	clear_input();
	cout << "The sorted array is: " << endl;
	for (int i : sort(vi)) {
		cout << i << " ";
	}
	cout << "\nEnter a number to check its occurrences: ";
	cin >> num;
	int occur = 0;
	for (int i : vi) {
		if (i == num) {
			occur++;
		}
	}
	if (occur > vi.size() / 2) {
		cout << num << " appears more than " << vi.size() / 2 << " times";
	}
	else {
		cout << num << " did not appear more than " << vi.size() / 2 << " times";
	}
	return 0;
}