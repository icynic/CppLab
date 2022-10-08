#include<iostream>
#include<string>
using namespace std;
int main() {
	cout << "Enter a string" << endl;
	string a;
	getline(cin, a);
	string b = a;
	int fr = 0, en = b.length() - 1;
	while (fr < en) {
		swap(b[fr], b[en]);
		fr++;
		en--;
	}
	if (a == b) {
		cout << a << " is a palindrome" << endl;
	}
	else {
		cout << a << " is not a palindrome" << endl;
	}
	return 0;
}