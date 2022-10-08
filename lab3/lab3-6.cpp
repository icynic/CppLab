#include <iostream>
#include <vector>
using namespace std;

vector<int> sort(vector<int> v_origin) {
	vector<int> result;
	int temp;
	for (auto i = v_origin.begin(); i != v_origin.end()-1; i++) {
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
int main() {
	vector<int> vi;
	int num;
	cout << "Enter an array of integer. Enter 'done' to end input" << endl;
	while (cin >> num) {
		vi.push_back(num);
	}

	cout << "The sorted array are: " << endl;
	for (int i : sort(vi)) {
		cout << i << " ";
	}
	return 0;
}