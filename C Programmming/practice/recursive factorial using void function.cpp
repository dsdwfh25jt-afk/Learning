#include<stdio.h>

 int fact(  int  n){

	if (n==0) return 1;
	
	int a= n*fact(n-1);
		printf("%d\n",n);
//	printf("%d\n",a);
	 
	return a;
}

int main (){
	
	 int   n;
	printf(" Enter the value of n : ");
	scanf("%d",&n);
 int k= fact(n);
	printf("%d",k);
}

// void function does not return any thing and we have to return the value to the function agin and again so that will not work here ....
