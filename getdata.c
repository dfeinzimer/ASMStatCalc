//	getdata.c

#include <float.h>
#include <stdio.h> 
#include <stdlib.h>

double * getdata() {
	double * data = (double *) malloc(sizeof(double) * 20);
	int i = 0;
	printf("Please enter floating point data.\n");
	printf("After the last number has been entered press Cntl+D\n");
	/*scanf("%lf", &data[i]);*/
	while (1) {
		scanf("%lf", &data[i]);
		i++;
	}
	return data;
}
