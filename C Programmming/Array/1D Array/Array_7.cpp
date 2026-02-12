// swapping 2 array elements 
#include<stdio.h>
int main (){
	
	int n [2]={7,2};
	printf("%d %d",n[0],n[1]);     // before swapping 
	int temp;
	temp=n[1];
	n[1]=n[0];
	n[0]=temp;
    printf("\n\n%d %d",n[0],n[1]); // after swapping 	
	
	
}
