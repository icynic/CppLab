#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> vi;
	int num, duplication=0;
	cout << "Enter an array of integer. Enter 'done' to end input"<<endl;
	while (cin >> num ) {
		for (int i : vi) {
			if (num == i) {
				duplication++;
			}
		}
		vi.push_back(num);
	}
	cout << "The number of duplicate elements is: " << duplication;
	return 0;
}