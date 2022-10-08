#include <iostream>
#include <vector>
using namespace std;

double get_majority(vector<int> v_origin) {
	int occur;
	double major=NAN;
	for (int i : v_origin) {
		occur = 0;
		for (int j : v_origin) {
			if (i == j) {
				occur++;
			}
		}
		if (occur > v_origin.size()/2) {
			major=i;
		}
	}
	return major;
}
int main() {
	vector<int> vi;
	int num;
	cout << "Enter an array of integer. Enter 'done' to end input" << endl;
	while (cin >> num) {
		vi.push_back(num);
	}

	double major = get_majority(vi);
	if (!isnan(major)) {
		cout << "The majority element is " << endl;
		cout << major;
	}
	else {
		cout << "There is no majority element";
	}
	return 0;
}