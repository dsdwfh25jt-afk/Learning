#include<stdio.h>
#include<unistd.h>
int main (){
	
	int n,x;
	
	
	printf(" Enter the number of rows : ");
	scanf("%d",&n);
	printf(" Enter the number of micro sec for alphabet to print : ");
	scanf("%d",&x);
	for(int i=1; i<=n; i++)
	{
	
		for (int g=1; g<=n-i+n; g++){
			printf(" ");
		
		}
		
		
		int c=1+64;
		
		for (int a=1; a<=i; a++){
			char  ch= (char) c;
			printf("%c",ch);
			usleep(x);
			c++;
			
			
		}
		int k=i-1;
		int m=64+k;
		for(int b=1; b<=i-1; b++){
			char kh=(char)m;
		printf("%c",kh);
		usleep(x);
	m--;
		}
		printf("\n");
		
	}
}
