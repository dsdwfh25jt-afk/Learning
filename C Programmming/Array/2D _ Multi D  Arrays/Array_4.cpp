#include <stdio.h>
int main() {
 	int rows , col;
 	printf("Enter the number of rows : ");
 	scanf("%d",&rows);
 	printf("Enter the number of col : ");
 	scanf("%d",&col);
 	
   int arr[rows][col];
   
   
   for (int i=0; i<rows; i++)  {
   	for(int j=0; j<col; j++) {
   		printf("Enter the row no. %d's and col no. %d's element : ",i,j);
   		scanf("%d",&arr[i][j]);
	   }

   }
   
   
   for (int i=0; i<col; i++)  {
   	for(int j=0; j<rows; j++) {
   		
   		printf("%d",arr[j][i]);
	   }
	   printf("\n");
   }
   

}

