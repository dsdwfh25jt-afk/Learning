#include<stdio.h>

int stari (int n){
	if(n<=2) return n;
	int totalways = stari(n-1) + stari (n-2);
	return totalways;
	
}
int main (){
	
	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	printf("%d",stari(n));
	
}
