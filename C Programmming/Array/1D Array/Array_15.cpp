// find 3 number pair who's addition is 12 in the given array which size is take from the user 
// and the elements also take from the user 

#include <stdio.h>
int triplePairs(int array[], int size) {
	
	int totalPairs=0;
	for( int element_1=0; element_1<size; element_1++) {
		
		for (int element_2=element_1+1; element_2<size; element_2++) {
			
			for (int element_3=element_2+1; element_3<size; element_3++) {
				
				if(array[element_1] + array[element_2] + array[element_3] == 12) {
						totalPairs++;
					printf("the pair %d is (%d,%d,%d)\n",totalPairs,array[element_1],array[element_2],array[element_3]);
				
				}
			}
		}
	}
	return totalPairs;
	
}

int main() {
	int size;
	printf("Enter the size of the array : ");
	scanf("%d",&size);
	int array[size];
	
	for( int index=0; index<size; index++) {
		printf("Enter element number %d in the array : ",index+1);
		scanf("%d",&array[index]);
		
	}
	
	
	
	printf("Total pairs who's sum is 12  that are : %d",triplePairs(array,size)); 
	
}
