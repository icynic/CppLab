#include <iostream>
#include <string>
using namespace std;
int main() {
	cout << "Enter a line of string: " << endl;
	string str;
	getline(cin, str);
	cout << "Enter a word: ";
	string word;
	cin >> word;

	int count = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == word[0]) {
			for (int j = 1, ni = i+1; j < word.size();) {
				if (str[ni] == word[j]) {
					count++;
					ni++;
					j++;
					continue;
				}
				else {
					break;
				}
			}
		}
	}
	cout << word << " appeared " << count/(word.size()-1) << " times" << endl;
	return 0;
}