#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void f1() {
	double cube_side;
	cout << "Enter a cube's side length: ";
	cin >> cube_side;
	cout << "Its volume is " << pow(cube_side, 3) << endl;
}
void f2() {
	double a, b, c, perimeter, area;
	cout << "Enter a rectangle's three side length" << endl;
	cin >> a >> b >> c;
	perimeter = a + b + c;
	area = sqrt(perimeter / 2 * (perimeter / 2 - a) * (perimeter / 2 - b) * (perimeter / 2 - c));
	cout << "Its area is " << area << ", perimeter is " << perimeter << endl;
}
void f3() {
	bool is_celsius = false;
	cout << "Enter 'c' or 'f' to choose Celsius or Fahrenheit: ";
	char form;
	cin >> form;
	if (form == 'c') {
		is_celsius = true;
	}
	else if (form == 'f') {
		is_celsius = false;
	}
	else {
		cout << "Invalid input" << endl;
	}
	double temperature;
	cout << "Enter a temperature: ";
	cin >> temperature;
	if (is_celsius) {
		temperature = temperature * 1.8 + 32;
	}
	else {
		temperature = (temperature - 32) / 1.8;
	}
	cout << temperature;
}
void f4() {
	int number = 0;
	cout << "Enter a number: ";
	cin >> number;
	if (number > 0 && number % 2 == 0) {
		cout << "Positive even";
	}
	else if (number < 0 && number % 2 == 0) {
		cout << "Negetive even";
	}
	else if (number > 0 && number % 2 == 1) {
		cout << "Positive odd";
	}
	else if (number < 0 && number % 2 == 1) {
		cout << "Negative odd";
	}
	else {
		cout << "Unknown";
	}
}
void f5() {
	double num1, num2;
	cout << "Enter two numbers" << endl;
	cin >> num1 >> num2;
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	cout << num1 << " " << num2 << endl;
}
void f6() {
	string first_name, last_name;
	cout << "Enter your first name: ";
	cin >> first_name;
	cout << "Enter your last name: ";
	cin >> last_name;
	cout << last_name << " " << first_name << endl;
}
void f7() {
	char c;
	cout << "Enter a character: ";
	cin >> c;
	cout << int(c);
}
void f8() {
	int i, rank;
	cout << "Enter a integer: ";
	cin >> i;
	if (i >= 0 && i <= 100) {
		rank = i / 10;
		if (rank == 0) {
			cout << "Its range is [0-10]" << endl;

		}
		else {
			cout << "Its range is [" << rank * 10 + 1 << "-" << (rank + 1) * 10 << "]" << endl;
		}
	}
	else {
		cout << "Invalid input" << endl;
	}
}
void f9() {
	int seconds, minutes, hours;
	cout << "Enter seconds: ";
	cin >> seconds;
	minutes = seconds / 60;
	seconds = seconds % 60;
	hours = minutes / 60;
	minutes = minutes % 60;
	cout << setw(2) << setfill('0') << hours
		<< ":" << setw(2) << setfill('0') << minutes
		<< ":" << setw(2) << setfill('0') << seconds << endl;
}
void f10() {
	int amount, notes[6] = { 500,100,50,20,10,5 };
	cout << "Enter an amout: ";
	cin >> amount;
	cout << "You have ";
	for (int i = 0, num = 0; i < 6; i++) {
		num = amount / notes[i];
		amount = amount % notes[i];
		cout << num << " of '" << notes[i] << "', ";
	}
}
void f11() {
	double num[3], max;
	cout << "Enter three numbers: ";
	for (int i = 0; i < 3; i++) {
		cin >> num[i];
	}
	max = num[0];
	for (int i = 1; i < 3; i++) {
		if (max < num[i]) {
			max = num[i];
		}
	}
	cout << max;
}
void f12() {
	double num1, num2;
	cout << "Enter two weight values: ";
	cin >> num1 >> num2;
	cout << "The average is " << (num1 + num2) / 2 << endl;
}
void f13() {
	double distance, fuel;
	cout << "Enter total distance and fuel spent: ";
	cin >> distance >> fuel;
	cout << "The average consumption is " << setprecision(2) << fuel / distance << endl;
}
void f14() {
	int num1, num2;
	cout << "Enter two integers: ";
	cin >> num1 >> num2;
	if (num1 == num2) {
		cout << "Their triple sum is " << (num1 + num2) * 3 << endl;
	}
	else {
		cout << "Their sum is " << num1 + num2 << endl;
	}
}

int main() {
	int question;
	string trash;
	while (1) {
		if (cin.fail()) {
			cin.clear();
			cin.sync();
			cin >> trash;
		}
		cout << endl;
		cout << "There are 14 questions. Which one do you want to see£¿" << endl
			<< "Please enter a number(1-14), enter 0 to exit: ";

		cin>>question;
		switch (question) {
		case 1:
			f1();
			break;
		case 2:
			f2();
			break;
		case 3:
			f3();
			break;
		case 4:
			f4();
			break;
		case 5:
			f5();
			break;
		case 6:
			f6();
			break;
		case 7:
			f7();
			break;
		case 8:
			f8();
			break;
		case 9:
			f9();
			break;
		case 10:
			f10();
			break;
		case 11:
			f11();
			break;
		case 12:
			f12();
			break;
		case 13:
			f13();
			break;
		case 14:
			f14();
			break;
		case 0:
			return 0;
		default:
			cout << "Invalid input";
		}
	}
	return 0;
}