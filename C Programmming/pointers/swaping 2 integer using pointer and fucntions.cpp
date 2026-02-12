#include<stdio.h>
int swap(int *a, int *b)
	{
		
		int temp ;
		temp=*a;
		*a=*b;
		*b=temp;
		
	}
int main (){
	
	
	
	int a=10; 
	int b=20;
	
	swap(&a,&b);
	printf(" after swap a : %d",a);
	printf(" after swap b : %d",b);
}
