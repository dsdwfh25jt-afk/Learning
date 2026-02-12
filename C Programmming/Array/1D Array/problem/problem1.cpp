/* 
Given an array of marks of students ,
 if the mark of any student is less than 35 
 print its roll number. [ roll number here 
 refers to the index of the array.]
*/

#include<stdio.h>
int main (){
	
	int a [7]={55,22,54,2,78,8,71};
	
	

     for(int i=0; i<7; i++){
		
		if (a[i]<35) printf(" the roll number of student is  %d  \n ",i);
	}
}





