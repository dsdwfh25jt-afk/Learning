#include<stdio.h>
int main (){
	
	int arr[5];  
	printf("Enter the value of arr \n");
//	scanf("%d\n",&arr[0]);
//	scanf("%d\n",&arr[1]);
//	scanf("%d\n",&arr[2]);
//	scanf("%d\n",&arr[3]);
	scanf("%d",&arr[4]);
	
	printf ( "\n\nHere we have only asingned 1 value and that is last one : and we will print all the values . \n");
	
	printf ( "this is the value of 1st element %d\n",arr[0]); // here we are printing 1st element 
	printf ( "this is the value of 2nd element %d\n",arr[1]);  // we did not passed any  kind of value to 0,1,2,3 so  they will print garbage value . or 0.
	printf ( "this is the value of 3rd element %d\n",arr[2]);
	printf ( "this is the value of 4th element %d\n",arr[3]);
	printf ( "this is the value of 5th element %d\n",arr[4]);  // here we have assinged the value for this elements  


	
	// this is all beacouse array index start from 0 and goes upto n-1 . ( size -1 )...
	
	
}
