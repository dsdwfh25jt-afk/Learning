/* 
take an array of marks of students from user ,
 if the mark of any student is less than 35 
 print its roll number. [ roll number here 
 refers to the index of the array.]
*/

#include<stdio.h>
int main (){
	
	int n;
	printf( " enter the size of array :  ");
	scanf("%d",&n);
	
	int marks[n];
	for (int i=0; i<n; i++){
		scanf("%d",&marks[i]);
		
	}
	
	 printf(" printing the roll number of students who's marks are less than 35 ... \n");
	 
	 for(int i=0; i<n; i++){
	 	if(marks[i]<35) printf(" Roll No. %d\n",i);
	 }
}
