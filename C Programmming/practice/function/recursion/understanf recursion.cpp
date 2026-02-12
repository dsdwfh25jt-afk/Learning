#include<stdio.h>
#include<unistd.h>

void   PIP(int n){
	if (n==0) return ;
	
	// this code to understand recursive functions :  
	printf("Pre  %d\n",n);
	PIP(n-1);
	printf("In   %d\n",n);
	PIP(n-1);
	printf("Post %d\n",n);
	//usleep(999999);
	return  ;
	
}
int main (){
	
	int n;
	printf(" Enter the value of  n : ");
	scanf("%d",&n);
	PIP(n);
	
	}
