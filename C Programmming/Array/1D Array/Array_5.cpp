// taking size of array from user and taking input from the user for coustom array 

#include<stdio.h>
int main (){
	
	
	int n ;
	printf ( " enter the size of array : ");
	scanf("%d",&n);
	
	int arr[n];
	
	for (int i=0; i<n; i++){
		
		printf(" Enter the value of element number %d : ",i+1);  // here we are printing the element number where we are storing value 
		scanf("%d",&arr[i]);                                     // in this line we are taking value from the user .
	}
	
	for (int i=0; i<n; i++){
		printf("The value you have entered for element number %d  is : %d \n",i+1,arr[i]); // here we are printing the value of element number and element number itself. 
	}
}
