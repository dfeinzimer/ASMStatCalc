#main.cpp

#include <iostream>
#include <string>

using namespace std;

const string AUTHOR = "David Feinzimer";

int main() {
	cout << "Welcome to Data Analysis by " << AUTHOR << endl;
	cout << "This program will compute certain statistical values." << endl << endl;
	while(true) {
		cout << "Please enter floating point data." << endl;
		cout << "After the last number has been entered press Cntl+D" << endl;
		exit;
	}
	return 0;
}
