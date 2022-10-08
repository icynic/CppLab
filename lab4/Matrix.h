#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Matrix {
public:
	typedef vector<vector<int>> matrix_type;
	matrix_type matrix;

	void input() {
	vector<int> mi;
		int num, row = 1, col = 0, col_size = 0;
		while (true) {
			cout << "Enter matrix's " << row << "st row. \nEnter 'ok' to start a next row. \nEnter 'done' to end input:  " << endl;
			col = 0;
			while (cin >> num) {
				mi.push_back(num);
				col++;
			}
			if (mi.size() != 0) {
				if (col != col_size && row != 1) {
					cout << "This is not a matrix, please try again" << endl;
					exit(EXIT_FAILURE);
				}
				matrix.push_back(mi);
			}
			if (is_input_done()) {
				break;
			}
			col_size = mi.size();
			mi.clear();
			row++;
		}
	}
	bool is_input_done() {
		string input;
		cin.clear();
		cin.sync();
		cin >> input;
		if (input == "done") {
			return true;
		}
		else {
			return false;
		}
	}
	void print() {
		cout << "The matrix is: " << endl;
		for (vector<int> i : matrix) {
			for (int j : i) {
				cout << j << " ";
			}
			cout << endl;
		}
	}
	void transpose() {
		vector<int> row(matrix.size());
		matrix_type t((matrix[0].size()), row);
		for (int i = 0; i < matrix.size(); i++) {
			for (int j = 0; j < matrix[0].size(); j++) {
				t[j][i] = matrix[i][j];
			}
		}
		matrix = t;
	}
	int left_diagonal_sum() {
		if (matrix.size() != matrix[0].size()) {
			cout << "This matrix has no diagonal" << endl;
			return 0;
		}
		int sum = 0;
		for (int i = 0; i < matrix.size(); i++) {
			sum = sum + matrix[i][i];
		}
		return sum;
	}
	void show_sum() {
		int row_sum;
		vector<int> col_sum(matrix[0].size(), 0);
		for (vector<int> i : matrix) {
			row_sum = 0;
			for (int j : i) {
				row_sum = row_sum + j;
			}
			i.push_back(row_sum);

			for (int col = 0; col < matrix[0].size(); col++) {
				col_sum[col] += i[col];
			}
		}
		matrix.push_back(col_sum);
		(*(matrix.end() - 1)).pop_back();
	}
	void triangular() {
		for (int i = 1; i < matrix.size(); i++) {
			for (int j = 0; j < i; j++) {
				matrix[i][j] = 0;
			}
		}
	}
};

