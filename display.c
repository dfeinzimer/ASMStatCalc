//	display.c

#include <stdio.h> 

void display(double * data, int nums_used) {
	printf("Thank you. The data you entered are \n");
	
	for (int i = 0; i < nums_used; i++) {
		printf("%lf%s", data[i], "\n");
	}

	printf("\n");
}