//	main.cpp

#include <iostream>
#include <string>
#include <vector>

#include "getdata.c"
#include "display.c"

using namespace std;

#define extern 'C' int getdata();
#define extern 'C' void display();

const string AUTHOR = "David Feinzimer";
double *dat;
int nums_used = 0;

int main() {
	
	cout << "Welcome to Data Analysis by " << AUTHOR << endl;
	cout << "This program will compute certain statistical values." << endl << endl;
	
	while (true) {
		
		nums_used = getdata();

		cout << "getdata() returns " << nums_used << endl;

		display();

	}

	return 0;
}