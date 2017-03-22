//	getdata.c

#include <stdio.h> 

int getdata(double * data) {
	int nums_used = 0;
	int code = 0;

	printf("Please enter floating point data.\n");
	printf("After the last number has been entered press Cntl+D\n");

	fseek(stdin, 0, SEEK_END);
	code = scanf("%lf", &data[nums_used]);
	while (code != EOF) {
		nums_used++;
		code = scanf("%lf", &data[nums_used]);
	}
	printf("\n");
	
	return nums_used;
}
