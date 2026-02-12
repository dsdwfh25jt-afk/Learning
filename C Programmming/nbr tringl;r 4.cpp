#include<stdio.h>
int main (){
	
	int n;
	printf(" Enter the number of rows : ");
	scanf("%d",&n);
	int nsp=1;
	int nst=n-1;
	
	for (int i=1; i<=n*2-1; i++){
		printf ("%d",i);
	}
	printf ("\n");
	
	for (int i=1; i<=n; i++){
		int a=1;
	
	
	for (int i=1; i<=nst; i++){
		printf("%d",a);
		a++;
	}
	for(int j=1; j<=nsp; j++){
		printf(" ");
		a++;
	}
	for(int k=1; k<=nst; k++){
		printf("%d",a);
		a++;
		
	}
	nsp+=2;
		nst--;
	printf("\n");
}
	
}
