//	getdata.c

#include <stdio.h> 

int getdata() {
	int nums_used = 0;
	int code = 0;
	
	double numbers[15];

	printf("Please enter floating point data.\n");
	printf("After the last number has been entered press Cntl+D\n");

	
	fseek(stdin, 0, SEEK_END);
	code = scanf("%lf", &numbers[0]);
	while (code != 0) {
		nums_used++;
		code = scanf("%lf",&numbers[0]);
	}
	printf("\n");
	
	return nums_used;
}