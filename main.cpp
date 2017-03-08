//	main.cpp

#include <iostream>
#include <string>
#include <vector>

#include "getdata.c"

using namespace std;

#define extern 'C' double * getdata();

const string AUTHOR = "David Feinzimer";
double data[10];

int main() {
	double * data;
	cout << "Welcome to Data Analysis by " << AUTHOR << endl;
	cout << "This program will compute certain statistical values." << endl << endl;
	data = getdata();
	return 0;
}
