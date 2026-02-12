#include<stdio.h>

int now(int a, int b, int c, int d ){
	if ( a==c || b==d) return 1;
	
	int nowr = now (a+1,b,c,d);
	int nowl = now ( a,b+1 ,c ,d);
	
	return nowr + nowl ;
	
}
int main ()
{
	int n,m;
	
	
	printf(" Enter the vlaue of n : ");
	scanf("%d",&n);
	printf(" Enter the vlaue of m : ");
	scanf("%d",&m);
	
	int NoW = now(1,1,n,m);
	printf(" the number of ways are : %d",NoW);
	
	
}

 // this code is created by own logic ... .
 
