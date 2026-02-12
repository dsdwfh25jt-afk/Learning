#include<stdio.h>
int main (){
	
	int n;
	printf(" Enter the number of rows -1 :  ");
	scanf("%d",&n);
	int nst=n-1;
	int nsp=1;
	
	for (int i=1; i<=n*2-1; i++){
		printf("*");
		
	}
		printf("\n");
		for (int i=1; i<=n; i++){
			
		for(int i=1; i<=nst; i++){
				printf("*");
				
		}
		for (int j=1; j<=nsp; j++){
				printf(" ");
		}
			for(int i=1; i<=nst; i++){
				printf("*");
				
		}
		nst--;
		nsp+=2;
		printf("\n");
	}
}
