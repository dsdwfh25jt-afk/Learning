#include<stdio.h>
int power (int a , int b ){
	 
	 if(b==0) return 1 ;
	 return a*power(a, b-1);
}
int main (){
	
	
	int a , b ;
	printf("Enter the value for a^b :\n");
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	
//	int p = power (a,b); this statement also can be used for ... here we have to ptint p .
	
	printf("%d raise to the power %d is %d", a,b,power(a,b));
		
}
