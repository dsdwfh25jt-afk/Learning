// write a program to store roll number and 
// and marks obtained by n stundets side by 
// side in a matrix .

#include <stdio.h>
int main() {
	int student;
	printf("Enter the number of students : ");
	scanf("%d",&student);
	
	int arr[student][3];
	
	for(int i=0; i<student; i++){
		for(int j=0; j<3; j++) {
			if (j==0){
				printf("Enter the marks of physics : ");
			}else if (j==1){
				printf("Enter the marks of chemistry : ");
			}else if (j==2){
				printf("Enter the marks of maths : ");
			}
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nstudent no.    physics  chem   maths \n");
	for(int i=0; i<student; i++){
			printf("\n    %d\t",i+1);
		for(int j=0; j<3; j++) {
		
			printf("\t%d",arr[i][j]);
		}
//		printf("\n%d\t",i+1);
	}
	
	
}
