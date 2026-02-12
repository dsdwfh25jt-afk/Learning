#include<stdio.h>
int rec(int n){
	if (n==0) return 1;
	// this code is for decreasing ...
	
	printf("%d\n",n);
	return rec(n-1);
}
int main (){
	int n;
	printf(" Enter the value of n: ");
	scanf("%d",&n);
	rec(n);
	
}
