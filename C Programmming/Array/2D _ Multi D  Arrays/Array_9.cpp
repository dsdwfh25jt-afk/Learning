// find out the maximum value element and the 
// minumum value element in the 2d array .
// and also find maximum and the minimum index 

#include <stdio.h>
int main () {
	int arr[3][3]= { 33,55,66,7,-134,45,45,66,34};
	int min=arr[0][0];
	int max=arr[0][0];
	int minIdxI,minIdxJ;
	int maxIdxI,maxIdxJ;
	
	
	for ( int i=0; i<3; i++ ) {
		
		for (int j=0; j<3; j++ ){
			if (max < arr[i][j] )  {
				max = arr[i][j];
				maxIdxI=i;
				maxIdxJ=j;	
			} 
			
			if (min > arr[i][j] )  {
				 min = arr[i][j];
				 minIdxI=i;
				 minIdxJ=j;
				 }
			
		}
	} 


  	printf(" Max = %d  index is : %d%d \n",max,maxIdxI,maxIdxJ);
	printf(" Min = %d  index is : %d%d \n",min,minIdxI,minIdxJ);
	
	
}
