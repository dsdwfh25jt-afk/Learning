#include<stdio.h>

void rec(int n){
	if(n==0) return ;
	//  printf("%d\n",n);
	rec(n-1);
	printf("%d\n",n);
}
int main (){
	int n;
	printf(" Enter the value of n  : ");
	scanf("%d",&n);
	rec(n);
}
