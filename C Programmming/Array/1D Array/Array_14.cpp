// find the total number of pairs in the 
// array whose sum is equal to the given 
// value x.

// let here x = 7
// let we consider array size 10

#include<stdio.h>
int main() {
	
	int arr[10]={ 1,3,45,5,7,94,3,4,2,1};

	int count=0;
	for(int element_1=0; element_1<10; element_1++)
	{	
	    for	(int element_2=element_1+1; element_2<10; element_2++)
		{
		  if(arr[element_1] + arr[element_2] == 8) 
		  {
		    count+=1;
		  }
		
		}
	}
	printf("%d",count);
}
