#include<stdio.h>
int fac (int n){
	int fact=1; 
	for(int i=2; i<=n; i++){
		fact*=i;
	}
	return fact;
}

int ncr (int n, int r){
	int nr = fac(n)/(fac(r)*fac(n-r));
	return nr;
	
}
int main (){
	int n;
	printf(" Enter the number of line in the pascle's  tringle : ");
	scanf("%d",&n);
	
	for (int i=0; i<n; i++){
		
		for (int j=0; j<=i; j++){
			printf("%d ",ncr( i,j));
		}
		printf("\n");
	}
	
	
}
