#include<stdio.h>
void rec (int n){
	if(n==0) return ;
    rec(n-1);
	printf("%d",n);
}
int main (){
	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	rec(n);
	
}
