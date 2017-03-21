//	computemedian.cpp

#include <iostream>

#include "resources.h"

double computemedian(double numbers[], int nums_used) {
	double median = 0;

	double temp[15];
	for (int i = 0; i < nums_used; i++) {
		temp[i] = numbers[i];
	}
	
	bool swapped = true;
	int j = 0;
	double tmp;
	while (swapped) {
		swapped = false;
		j++;
		for (int i = 0; i < nums_used - j; i++) {
			if (temp[i] > temp[i + 1]) {
				tmp = temp[i];
				temp[i] = temp[i + 1];
				temp[i + 1] = tmp;
				swapped = true;
			}
		}
	}

	if (nums_used % 2 == 0) {
		double a = temp[(nums_used - 1) / 2];
		double b = temp[(nums_used / 2)];
		median = (a + b) / 2;
	}
	else {
		median = temp[nums_used / 2];
	}

	return median;
}