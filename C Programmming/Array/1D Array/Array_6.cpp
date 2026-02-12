// PRINTING MAXIMUM ELEMENT OF ARRAY 
#include<stdio.h>
int main (){
	
	int n[7]={-12,-45,-6,3,7,-865,-67};
	int max=n[0];
	
	for (int i=1; i<7; i++)
	{	
	if(max<n[i]) max=n[i];	
	}
	
	printf(" %d",max);
}
