#include "headers.h"
#define ARRAY_SIZE 7 // if you change this also change it in functions.c
#define ARRAY_START 0

int main(){
	int a = 5;
	int b = 10;
	int array[ARRAY_SIZE] = {2,4,1,5,9,8,7};

	printArray(array,ARRAY_SIZE);
	quicksort(array,ARRAY_START ,ARRAY_SIZE - 1);
	printArray(array,ARRAY_SIZE);

	return 0;	}
