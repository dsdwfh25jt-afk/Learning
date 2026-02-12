// find the sum of all elements in the given matrix n*m
//
// 2 3 4 
// 5 7 8 
// 5 9 8 


#include <stdio.h>
int main() {
	int arr[3][3]={ 2,3,4,5,7,6,5,9,8};
	int sum = 0;
	
	for(int i=0; i<3; i++) {
		for (int j=0; j<3; j++) 
		{
			sum+=arr[i][j];
		}
		
	}
	printf("%d",sum);
}
