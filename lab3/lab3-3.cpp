#include <iostream>
#include <vector>
using namespace std;

vector<int> unique(vector<int> v1) {
	vector<int> v_unique;
	for (int i : v1) {
		bool is_exsit=false;
		for (int j : v_unique) {
			if (i == j) {
				is_exsit=true;
			}
		}
		if (is_exsit == false) {
			v_unique.push_back(i);
		}
	}
	return v_unique;
}


vector<int> frequency(vector<int> v1) {
	vector<int> v_frequency;
	for (int i : v1) {
		int duplication = 0;
		for (int j : v1) {
			if (i == j) {
				duplication++;
			}
		}
		v_frequency.push_back(duplication);
	}
	return unique(v_frequency);
}


int main() {
	vector<int> vi;
	int num;
	cout << "Enter an array of integer. Enter 'done' to end input" << endl;
	while (cin >> num) {
		vi.push_back(num);
	}
	
	cout << "The frequency are: " << endl;
	vector<int> f = frequency(vi);
	vector<int> u = unique(vi);
	for (int i = 0; i < u.size();i++) {
		cout << u[i] << " occurs "<<f[i]<<" times"<<endl;
	}
	return 0;
}