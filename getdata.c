//	getdata.c

#include <float.h>
#include <stdio.h> 

void getdata() {
	printf("Please enter floating point data.\n");
	printf("After the last number has been entered press Cntl+D\n");
	double *data;
	double pos;
	data = (double *) malloc(15 * sizeof(double));
	for (int i = 0; i < 15; i++) {
		scanf("%lf", &pos);
		data[i] = pos;
	}
}