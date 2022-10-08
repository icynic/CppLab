#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> vi;
	int num;
	cout << "Enter an array of integer. Enter 'done' to end input" << endl;
	while (cin >> num) {
		vi.push_back(num);
	}

	int max=vi[0], min=vi[0];
	for (int i : vi) {
		if (max < i) {
			max = i;
		}
		if (min > i) {
			min = i;
		}
	}

	cout << "The maximun is: " << max << endl;
	cout<< "The minimum is "<<min<< endl;
	return 0;
}