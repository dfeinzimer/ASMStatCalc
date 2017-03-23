//	sum.cpp

double sum(double numbers[], int nums_used){
	double sum = 0;
	
	for(int i = 0; i < nums_used; i++) {
		sum+= numbers[i];
	}
	
	return sum;
}
