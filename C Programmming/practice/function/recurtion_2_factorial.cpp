#include<stdio.h>
rec(int n){
if (n==1) return 1;
int x = n*rec(n-1);
  printf("%d\n",x);
	return x;
	
}
int main (){
	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
int x=	rec(n);
//	printf("%d",x);
	
	
}
