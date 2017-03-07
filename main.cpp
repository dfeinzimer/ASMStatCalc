#main.cpp

extern 'C' vector<double> getdata();

#include <iostream>
#include <string>
#include <vector>

#include "getdata.c"

using namespace std;

const string AUTHOR = "David Feinzimer";

int main() {
	vector<double> data;
	cout << "Welcome to Data Analysis by " << AUTHOR << endl;
	cout << "This program will compute certain statistical values." << endl << endl;
	data = getdata();
	return 0;
}
