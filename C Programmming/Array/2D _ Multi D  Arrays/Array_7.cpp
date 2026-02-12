// write a programme  to add two matrices 

#include <stdio.h> 
void print (int arr_1[][3]) {
		for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++) {
		printf("%d ",arr_1[i][j] );
		}
		printf("\n");
	}
}
int main () {
	
	int arr_1[3][3]={ 1,2,3,4,5,6,7,8,9};
	int arr_2[3][3]={ 3,45,3,3,43,23,4,3,4};
	
	
	for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++) {
			arr_1[i][j]	= arr_1[i][j] + arr_2[i][j];
		}
	}
	
	print( arr_1);
}
