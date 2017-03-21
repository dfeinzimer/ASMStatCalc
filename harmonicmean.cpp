//	harmonicmean.cpp

#include "resources.h"

double harmonicmean(double numbers[], int nums_used) {
	double harmonic = 0;

	for (int i = 0; i < nums_used; i++) {
		harmonic += (1 / numbers[i]);
	}

	harmonic = nums_used / harmonic;

	return harmonic;
}