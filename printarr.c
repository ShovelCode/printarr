#include <stdio.h>
#define SIZE 4

void printarray(int*);

int main(void){
	int x[SIZE] = {243,157,234,6943};
	printarray(x);
}

void printarray(int* x){

	for(int i = 0; i < SIZE; i++){
		printf("%d ", x[i]);
	}
}
