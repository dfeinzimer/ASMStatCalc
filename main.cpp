//	main.cpp

#include <iostream>
#include <string>
#include <vector>

#include "getdata.c"
#include "display.c"

using namespace std;

#define extern 'C' int getdata(double * data);
#define extern 'C' void display(double * data, int nums_used);

const string AUTHOR = "David Feinzimer";
double numbers[15];
double *nums = &numbers[0];
int nums_used = 0;

int main() {
	
	cout << "Welcome to Data Analysis by " << AUTHOR << endl;
	cout << "This program will compute certain statistical values." << endl << endl;
	
	while (true) {
		
		nums_used = getdata(nums);

		display(nums, nums_used);

	}

	return 0;
}