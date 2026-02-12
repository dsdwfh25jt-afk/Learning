#include<stdio.h>

int now(int a, int b ){
	if ( a==1 || b==1) return 1;
	
	int nowr = now (a-1, b);
	int nowl = now ( a, b-1);
	
	return nowr + nowl ;
	
}
int main ()
{
	int n,m;
	
	
	printf(" Enter the vlaue of n : ");
	scanf("%d",&n);
	printf(" Enter the vlaue of m : ");
	scanf("%d",&m);
	
	int NoW = now(n,m);
	printf(" the number of ways are : %d",NoW);
	
	
}

 // this code is created by own logic ... .
 
