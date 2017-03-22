//	main.cpp

#include <iostream>
#include <string>
#include <vector>

#include "display.c"
#include "getdata.c"
#include "resources.h"
#include "sort.c"

using namespace std;

//extern "C" {double sum(double * data, int nums_used);}
#define extern 'C' int getdata(double * data);
#define extern 'C' void display(double * data, int nums_used);
#define extern 'C' void sort(double * data, int nums_used);

const string AUTHOR = "David Feinzimer";
double numbers[15];
double *nums = &numbers[0];
int nums_used = 0;

int main() {
	
	cout << "Welcome to Data Analysis by " << AUTHOR << endl;
	cout << "This program will compute certain statistical values." << endl << endl;
	
	while (true) {
		
		nums_used = getdata(nums);

		if (nums_used > 0) {
			display(nums, nums_used);

			//double sumation = sum(nums,nums_used);
			double sumation = 0;
			double arithmetic_mean = computemean(numbers, nums_used);
			double median = computemedian(numbers, nums_used);
			double harmonic_mean = harmonicmean(numbers, nums_used);

			cout << "The following statistics were computed: " << endl;
			cout << "Sum:\t\t\t" << sumation << endl;
			cout << "Arithmetic mean:\t" << arithmetic_mean << endl;
			cout << "Median:\t\t\t" << median << endl;
			cout << "Harmonic mean:\t\t" << harmonic_mean << endl;
			cout << "The sorted data set is:" << endl;
			sort(nums, nums_used);
			cout << "The original data set is:" << endl;
			for (int i = 0; i < nums_used; i++) {
				cout << numbers[i] << endl;
			}
			cout << "Thank you for using this program. Enjoy your statistics." << endl << endl;
		}
		else {
			cout << "No input received." << endl << endl;
		}

	}

	return 0;
}