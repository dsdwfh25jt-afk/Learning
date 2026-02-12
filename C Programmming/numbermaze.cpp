#include<stdio.h>
#include<unistd.h>
int main(){
	int s ;
	
	int n;
	printf(" enter the value of middle number : ");
	scanf("%d",&n);
		printf(" enter the milisec of delay : ");
	scanf("%d",&s);
	int min ;
	int a;
	int b;
	
	for(int i=1; i<=n*2-1; i++){
		
		for (int j=1; j<=n*2-1; j++){
		
		
			if(i>n) a=2*n-i;
			else 	a=i;
		 if(j>n) b=2*n-j;
		 else 	b=j;
			
			
			if(a<b) min =a;
			else min = b;
			printf("  %d", n+1-min );
			usleep(s);
			
		}
		printf("\t");printf("\n");
	}
}
