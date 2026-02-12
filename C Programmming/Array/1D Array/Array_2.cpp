// printing array using loops ...

#include<stdio.h>
int main () {
	
	int arr[4]={2,3,4,5};
	
	printf("From here we are printing the values . \n");
	// we are initializing i from 0 beacouse the index of array from 0 that why the first element will be on 0 th index and Nth will  be on n-1. 
	for(int i=0; i<4; i++){
		printf(" printing elements number %d :  %d\n",i,arr[i]);
		
	}
	return 0;
}
