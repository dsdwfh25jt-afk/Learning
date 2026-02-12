// reverse the array without using second array 


#include <stdio.h>
int main (){
	int temp=0;
	int n=4;
	int array [5]= {1,2,3,4,5};
	for (int index=0; index<2; index++){
		temp=array[index];
		array[index]=array[n];
		array[n]=temp;
		n--;
	}
	
	
	for(int i=0; i<5; i++){
		printf("%d",array[i]);
	}
}

// this code is done by using fo loop 
