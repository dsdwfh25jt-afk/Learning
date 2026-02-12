#include<stdio.h>
#include<unistd.h>

int main (){
	
	int n,m;
	printf(" Enter the number of rows : ");
	scanf("%d",&n);
	printf(" Enter the number of coloumns : ");
	scanf ("%d",&m);
	
	
	for (int i=1; i<=n; i++){
		for (int i=1; i<=m; i++){
			printf("*");
			usleep(999999);
			
		}
		printf("\n");
	}
}
