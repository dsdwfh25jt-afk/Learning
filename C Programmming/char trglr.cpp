#include<stdio.h>
int main (){
	
	int n;
	printf(" Enter the number of rows : ");
	scanf("%d",&n);
	int nsp=1;
	int nst=n-1;
	
	for (int i=1; i<=n*2-1; i++){
		printf ("%c",i+64);
	}
	printf ("\n");
	
	for (int i=1; i<=n; i++){
		int a=1+64;
		char ch=(char)a;
	
	
	for (int i=1; i<=nst; i++){
		printf("%c",a);
		a++;
	}
	for(int j=1; j<=nsp; j++){
		printf(" ");
		a++;
	}
	for(int k=1; k<=nst; k++){
		printf("%c",a);
		a++;
		
	}
	nsp+=2;
		nst--;
	printf("\n");
}
	
}
