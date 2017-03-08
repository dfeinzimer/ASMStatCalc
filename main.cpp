//	main.cpp

#include <iostream>
#include <string>
#include <vector>

#include "getdata.c"

using namespace std;

#define extern 'C' void getdata();

const string AUTHOR = "David Feinzimer";
double data[15];

int main() {
	cout << "Welcome to Data Analysis by " << AUTHOR << endl;
	cout << "This program will compute certain statistical values." << endl << endl;
	getdata();
	return 0;
}