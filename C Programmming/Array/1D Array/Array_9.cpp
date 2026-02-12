// swaping 2 array elements using fuction 

#include<stdio.h>

void swap(int n[]){
	
	int temp;
	temp=n[0];
	n[0]=n[1];
	n[1]=temp;
	
}
int main (){
	
	int n[2]= {2,55};
	printf(" Elements before swapping ... %d   %d \n",n[0],n[1]);
	swap(n);
    printf(" Elements after swapping ... %d   %d \n",n[0],n[1])	;
}  
