#include <iostream>
using namespace std;

int main() {
	int mark{}, n{}, total{}, passCount{}, failCount{};
	double avg{};
	char grade;
	cout << "How many marks will you enter? ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Mark " << i + 1 << ": ";
		cin >> mark;
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
		cout << "Grade: " << grade << endl;
		if (mark >= 50) {
			cout << "Result: Pass" << endl;
			passCount++;
		}
		else {
			cout << "Result: Fail" << endl;
			failCount++;
		}
		total += mark;
		cout << endl;
	}
	avg = double(total) / n;
	cout << "Average: " << avg << endl;
	cout << "Total Passes: " << passCount << endl;
	cout << "Total Failures: " << failCount << endl;
	return 0;
}