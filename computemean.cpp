//	computemean.cpp

#include "resources.h"

double computemean(double numbers[], int nums_used) {
	double mean = 0;

	for (int i = 0; i < nums_used; i++) {
		mean += numbers[i];
	}

	mean /= nums_used;

	return mean;
}