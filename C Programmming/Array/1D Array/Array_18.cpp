// reverse the given array and store in the second array 
// and print the second array 

#include <stdio.h>
int main (){
	int size=5;
	int index=size-1;
	int arr[size]={ 1,2,3,4,5};
	int arr_2[size];
	
	for(int element_1=0; element_1<size; element_1++){
		arr_2[element_1]=arr[index];
		index--;	
	}
	for(int secondArrayElement=0; secondArrayElement<size; secondArrayElement++){
		printf(" %d",arr_2[secondArrayElement]);
	}
}
