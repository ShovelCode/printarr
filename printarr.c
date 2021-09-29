#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

void printarray(int*);
void printarray_size(int*, int);

int main(void){
	int x[SIZE] = {243,157,234,6943};
	printarray(x);

	int size = 0;
	printf("Enter size for this array: ");
	scanf("%d", &size);
	int y[size];
	printf("%d", size);

	for(int i = 0; i < size; i++){
		y[i] = rand();
	}

	printarray_size(y, size);
}

void printarray(int* x){

	for(int i = 0; i < SIZE; i++){
		printf("%d ", x[i]);
	}
}

//internally, user-at-computer, file, database

void printarray_size(int* x, int size){
	for(int i = 0; i < size; i++){
		printf("%d ", x[i]);
	}
}
