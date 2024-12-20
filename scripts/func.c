#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <math.h>

int sum_parallel(int value){
	double sum = 0;
	int i;
	
#pragma omp parallel for reduction(+:sum)
	for(i=0;i<value;i++){
		sum++;
	}
	
	return sum;
}

int sum(int value){
	double sum = 0;
	int i;
	
	for(i=0;i<value;i++){
		sum++;
	}
	
	return sum;
}