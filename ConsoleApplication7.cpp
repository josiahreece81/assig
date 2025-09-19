#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main() {
	double gradeAvg, gradeHigh = 0, gradeLow = 100, gradeTotal = 0, grade[1000];
	string nameHigh, nameLow, name[1000];
	int opt, display = 0, count = 0;


	cout << "Please choose a data entry option from below (1 or 2):\n1. Enter 5 students\n2. Enter an unlimited amount of students\n";
	cin >> opt;
	 
	if (opt == 1){
		while (count <= 2) {
			count++;
			if (count == 1) cout << "\nYou can enter upto 5 student.";
			cout << "\nPlease enter student #" << count << " name\n";
			cin >> name[count];
			cout << "what is " << name[count] << "'s grade\n";
			cin >> grade[count];
			gradeTotal += grade[count];
			if (grade[count] > gradeHigh) {
				gradeHigh = grade[count];
				nameHigh = name[count];
			}
			if (grade[count] < gradeLow) {
				gradeLow = grade[count];
				nameLow = name[count];
			}
			

		}
	}
	if (opt == 2) {
		while (true) {
			count++;
			if (count == 1) cout << "\nYou can enter as much students as needed, Type 'STOP' as a students name when finish.";
			cout << "\nPlease enter student #" << count << " name\n";
			cin >> name[count];
			if (name[count] == "stop" || name[count] == "STOP") {
				count -= 1;
				break;
			}
			cout << "what is " << name[count] << "'s grade\n";
			cin >> grade[count];
			gradeTotal += grade[count];
			if (grade[count] > gradeHigh) {
				gradeHigh = grade[count];
				nameHigh = name[count];
			}
			if (grade[count] < gradeLow) {
				gradeLow = grade[count];
				nameLow = name[count];
			}
			

		}
	}
	if (opt == 1 || opt == 2) {
		gradeAvg = gradeTotal / count;
		cout << "\n\nHere are your results:====================== \n";

		display++;
		while (display <= count) {
			cout << name[display] << " " << grade[display];
			if (grade[display] < 60) {
				cout << " - FAILED\n";
			}
			else {
				cout << " - PASSED\n";
			}
			display++;
		}
		cout << "\nThe Avg grade is " << setprecision(2) << gradeAvg << endl;
		cout << "\nThe student with the Highest grade is " << nameHigh << ", who had a " << gradeHigh << ".\n";
		cout << "\nThe student with the lowest grade is " << nameLow << ", who had a " << gradeLow << ".\n\n";
		
	}

	else {
		cout << "INVALID ENTRY";
	}
	return 0;
}