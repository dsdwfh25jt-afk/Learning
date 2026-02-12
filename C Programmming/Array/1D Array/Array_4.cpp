// taking iput in array from user , using loop and printing them using loops....


#include<stdio.h>
int main () 
{
	 int array[10];
 
 printf ("From here you can  start entering Element of array : \n");
 
 for( int  i=0; i<10 ; i++ ){
 	
 	printf( "Enter the element number %d : ", i+1);
 	scanf("%d",&array[i]);
 	
 }
 // from below we are printing our given input ...
 for(int i=0; i<10; i++){
 	
 	printf("Element number %d is : %d \n",i+1,array[i]);
 }
	
}
