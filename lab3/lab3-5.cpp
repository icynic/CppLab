#include <iostream>
#include <vector>
using namespace std;

void split_odd_even(vector<int> v_origin, char opt) {
	for (int i : v_origin) {
		if (opt == 'o' && i % 2 != 0) {
			cout << i<<" ";
		}
		if (opt == 'e' && i % 2 == 0) {
			cout<<i<<" ";
		}
	}
	cout << endl;
}

int main() {
	vector<int> vi;
	int num;
	cout << "Enter an array of integer. Enter 'done' to end input" << endl;
	while (cin >> num) {
		vi.push_back(num);
	}
	
	cout << "The odd numbers are: " << endl;
	split_odd_even(vi, 'o');
	cout << "The even numbers are: " << endl;
	split_odd_even(vi, 'e');
	return 0;
}