#include<stdio.h>

//int fact (){
//	
//	
//}


int main (){
	
	int n;
	printf( " Enter the value of n  : ");
	
	scanf("%d",&n);
	int fact=1;
	for (int i=2; i<=n; i++){
		
		fact*=i;
		printf("%d\n",fact);
		
	}
}
