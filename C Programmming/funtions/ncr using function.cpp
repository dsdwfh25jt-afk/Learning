#include<stdio.h>
int fac (int n){
	int fac=1;
	for(int i=2; i<=n; i++){
		fac*=i;
	}
	return fac;
	
}
int ncr(int n, int r){
	
	int ncr = fac(n)/(fac(r)*fac(n-r));
	return ncr;
}

int main (){
	
	int n , r;
	printf(" Enter the value of n : ");
	scanf("%d",&n);	
	printf("Enter the value of r  : ");
	scanf("%d",&r);
printf("%d",ncr(n,r));
}
