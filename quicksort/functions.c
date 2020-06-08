#include <stdio.h>

void swapNumbers(int *a, int *b){
	int c = 0;

	 c = *a;
	*a = *b;
	*b = c;
}

void printNumbers(int a, int b){
	printf("Number 1: %d\n", a);
	printf("Number 2: %d\n", b);
}

long position(int array[], int left, int right){
	int pivot = array[right];
	int  i    = left;
	int  j    = right - 1;

	while(1){
		while(array[i] < pivot){
			++i;
		}
		while( (array[j] > pivot) && (j > 0) ){
			--j;
		}
		if(j <= i){
			break;
		}

		swapNumbers(&array[i], &array[j]);
		++i;
		--j;
	}

	swapNumbers(&array[i],&array[right]);
	
	return i;
}

void printArray(int array[], int length){

	for(int i = 0; i < length; ++i){
		if(i == 0){
			printf("Array: ");
		}

		printf("%d ", array[i]);
	}

	printf("\n");
}

void quicksort(int array[], int left, int right){

	if(right > left){

		int pos = position(array,left,right);

		quicksort(array, 0, pos - 1);
		quicksort(array,pos + 1, right);
			
	}
}
