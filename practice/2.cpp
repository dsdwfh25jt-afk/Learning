#include<stdio.h>
int main (){
	
	int n;
	printf(" Enter the number of rows : ");
	scanf("%d",&n);
	int a=1;
	for (int i=1; i<=n; i++){
		
		for ( int j=1; j<=i; j++)
		{
			printf("%d ",a*j);
			a++;
		}
		for (int k=1; k<=n-i; k++){
			printf("%d ",a);
			a=a+k;
		}
		printf("\n");
	}
}
