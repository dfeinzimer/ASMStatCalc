//	getdata.c

#include <stdio.h> 

double * getdata() {
	printf("Please enter floating point data.\n");
	printf("After the last number has been entered press Cntl+D\n");
	double *data;
	data = (double *) malloc(15 * sizeof(double));
	double numbers[15];
	for (int i = 0; i < 15; i++) {
		scanf("%lf", &numbers[i]);
		if (0) {	//	TODO: Break on CONTROL+D
			break;
		}
	}
	data = numbers;
	return data;
}