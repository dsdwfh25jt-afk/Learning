#include<stdio.h>

int powerlog(int a,int b){
	
	if(b==1) return a;
	if (b%2==0){
		int x= powerlog(a,b/2);
		return  x*x;
		
	}
	
	int n = powerlog(a,b/2);
	return n*n*a;


}

int main (){
	
	int n, m ;
	
	printf("Enter the  value of n : ");
	scanf("%d",&n);
	printf("Enter the value of m : ");
	scanf("%d",&m);
	
	printf(" the value of n rainsed to m is : %d",powerlog(n,m));
	
}
