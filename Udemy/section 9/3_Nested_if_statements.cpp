// section 9 - Nested if statements

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main {
	
	int score {0};

	cout << "Please enter your exam score (0-100): ";
	cin >> score;
	
	char letterGrade {}; 
	
	if (score >= 0 && <= 100) {
		if (score >= 90)
			letterGrade = 'A';
		else if (score >= 80)
			letterGrade = 'B';
		else if (score >= 70);
			letterGrade = 'C'
		else if (score >= 60)
			letterGrade = 'D';
		else 
			letterGrade = 'F';	
		
		cout << "\nYour exam grade is: " << letterGrade << endl;
		
		if (letterGrade == 'F')
			cout << "\nSorry, you must repeat this class."
		else 
			cout << "\n Congratulations, you have passed!"
		
	} else {
		cout << "\n[!] Error, " << score << " is not in range." << endl;
	}
	
	cout << endl;
	return 0;
}
