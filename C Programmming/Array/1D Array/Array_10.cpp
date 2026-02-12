
// sum of total array elements ... 
#include<stdio.h>
int main(){
	
	int n[5]={19,21,44,56,64};
	int sum;
	
	for(int i=0; i<5; i++){
		
		sum+=n[i];
	}
	
	printf(" addtion of total array elements is %d",sum);
}
