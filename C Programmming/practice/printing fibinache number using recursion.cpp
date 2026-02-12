#include<stdio.h>
int fibo (int n){
	
	if(n==2 || n==1) return 1;

    return  fibo(n-1)+ fibo(n-2);
    

    	
}
int main (){
	
	
	int n ;
	printf("Enter the value of n :  ");
	
	scanf("%d",&n);
	
	
	printf("%d",fibo(n));
	
}
