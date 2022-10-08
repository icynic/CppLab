#include <iostream>
using namespace std;

int main() {
	cout << "Enter a integer: ";
	int n;
	cin >> n;
	cout << "Its multiplication table is: "<<endl;
	cout << "  1 2 3 4 5 6 7 8 9 " << endl;
	cout << n<<" ";
	for (int i = 1; i <= 9; i++) {
		cout << n * i<<" ";
	}
	return 0;
}