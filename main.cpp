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

		double sum = 0;
		double arithmetic_mean = 0;
		double median = 0;
		double harmonic_mean = 0;

		cout << "The following statistics were computed: " << endl;
		cout << "Sum:\t\t\t" << sum << endl;
		cout << "Arithmetic mean:\t" << arithmetic_mean << endl;
		cout << "Median:\t\t\t" << median << endl;
		cout << "Harmonic mean:\t\t" << harmonic_mean << endl;
		cout << "The sorted data set is:" << endl;
		//sort();
		cout << "The original data set is:" << endl;
		for (int i = 0; i < nums_used; i++) {
			cout << numbers[i] << endl;
		}
		cout << "Thank you for using this program. Enjoy your statistics." << endl << endl;

	}

	return 0;
}