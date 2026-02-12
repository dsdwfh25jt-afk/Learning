#include<stdio.h>
int main(){
	
	int n;
	printf(" enter the number of rows : ");
	scanf("%d",&n);
	
	for (int i=1; i<=n; i++ )
	{
	
		
		
		
		
		for (int k=1; k<=n-i; k++)
		{
			printf(" ");
	
		}
		
		
		
		
		for ( int k=1; k<=i; k++){
			printf("%d",k);
		}
		
		
			int a=i-1;
		for(int l=1; l<=i-1; l++){
			printf("%d",a);
			a--;
			
		}
		
		
		printf("\n");
	}
	
}
