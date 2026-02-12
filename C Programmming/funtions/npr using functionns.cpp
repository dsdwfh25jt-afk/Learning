#include<stdio.h>
int fact(int n){
	int fact=1; 
	for(int i=2; i<=n; i++){
		fact*=i;
		
	}
	return fact;
	
}

int npr(int n, int r ){
	int npr=fact(n)/fact(n-r);
	return npr;
}
int main (){
	
	int n;
	int r; 
	printf(" Enter the value of n : ");
	scanf("%d",&n);
	printf(" Enter the value of r : ");
	scanf("%d",&r);
	
	printf(" the npr is : %d",npr(n,r));
}
