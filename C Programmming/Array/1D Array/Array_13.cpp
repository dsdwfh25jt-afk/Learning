// Find the difference between the sum of 
// elements at even indices to the sum of 
// elements at odd indices 

#include<stdio.h>
int main (){
	int sum_e=0;
	int sum_o=0;
	
	int arr[]={5,5,6,9,6,8,19};
	for(int i=0; i<7; i++){
		if(i%2==0) { sum_e+=arr[i];
		}else 
		{
			sum_o+=arr[i];
		}
	}
	printf(" The difference betweeen odd and even is %d",sum_e-sum_o);
}
