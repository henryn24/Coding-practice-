#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int mark;
	char grade;
	char result[5];

	do {
		cout << "Please enter the mark: ";
		cin >> mark;
		if (mark < 0 || mark > 100) {
			cout << "Invalid mark! " << endl;
		}
	} while (mark < 0 || mark > 100);

	if (mark >= 50) {
		strcpy(result, "Pass");
	}
	else {
		strcpy(result, "Fail");
	}

	if (mark >= 80) {
		grade = 'A';
	}
	else if (mark >= 70) {
		grade = 'B';
	}
	else if (mark >= 60) {
		grade = 'C';
	}
	else if (mark >= 50) {
		grade = 'D';
	}
	else {
		grade = 'F';
	}

	cout << "Mark: " << mark << endl;
	cout << "Grade: " << grade << endl;
	cout << "Result: " << result << endl;

	return 0;
}