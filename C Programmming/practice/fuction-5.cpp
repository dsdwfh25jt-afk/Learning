#include<stdio.h>
int increasing (int x , int n){
	if (x>n) return 0;
	printf("%d\n",x);
	increasing (x+1,n);
	return 0;
	

}

int main(){
	
	int n;
	printf(" Enter the value of n : ");
	scanf(" %d",&n);
	
	increasing (1,n);
}
