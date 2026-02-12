#include<stdio.h>
int stair (int n){
	if(n<=2)  return n;
	if (n==3) return 4;
	return stair(n-1)+ stair(n-2)+stair(n-3);
}
int main (){
	
	int n;
	printf (" Enter the value of n : ");
	scanf("%d",&n);
	
	printf (" the answer is %d",stair(n));
	
}
