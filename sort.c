//	sort.c

#include <stdio.h> 

typedef int boole;
#define true 1
#define false 0

void sort(double * data, int nums_used) {

	//Copy data to dummy array
	double temp[15];
	for (int i = 0; i < nums_used; i++) {
		temp[i] = data[i];
	}

	
	boole swapped = true;
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


	//Print sorted dummy array
	for (int i = 0; i < nums_used; i++) {
		printf("%lf%s", temp[i], "\n");
	}

}