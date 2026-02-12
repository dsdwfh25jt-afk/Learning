#include<stdio.h>
int fact(int n){
	int fact=1; 
	for(int i=2; i<=n; i++){
		fact*=i;
	}
	return fact;
	
}
int ncr(int n , int r){
	
	int ncr = fact(n)/(fact(r)*fact(n-r));
	return ncr;
}
int main (){
	int n;
	printf(" Enter the number of lines in your tringle : ");
	scanf("%d",&n);
	int nsp=(n+1);  // may be here error generated
	for(int i=0; i<=n; i++){
		
		for(int k=1; k<nsp; k++){  // or may be here 
			printf(" ");
		}
		for(int j=0; j<=i; j++){
			printf("%d ",ncr(i,j));
			
		}
		nsp--;
		printf("\n");
	}
}
