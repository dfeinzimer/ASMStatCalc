//	main.cpp

#include <iostream>
#include <string>
using namespace std;

#include <vector>

#include "getdata.c"
#include "display.c"

#define extern 'C' double * getdata();
#define extern 'C' void display();

const string AUTHOR = "David Feinzimer";
double *dat;

int main() {
	
	cout << "Welcome to Data Analysis by " << AUTHOR << endl;
	cout << "This program will compute certain statistical values." << endl << endl;
	
	while (true) {
		
		dat = getdata();

		display();

	}

	return 0;
}