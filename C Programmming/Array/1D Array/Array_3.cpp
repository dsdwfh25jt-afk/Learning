// taking input from the user of element of array >


 #include<stdio.h>
 int main () { 
 
 int array[10];
 
 printf ("From here you can  start entering Element of array : \n");
 
 for( int  i=0; i<10 ; i++ ){
 	
 	printf( "Enter the element number %d : ", i+1);
 	scanf("%d",&array[i]);
 	
 }
 
 }
