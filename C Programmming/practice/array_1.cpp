#include<stdio.h>

void diff (int i, int j){
	
	//if (j==0) printf(" ROLL NO. ");
	if(j==1) printf(" \t");
	
}
int main (){
	int a,b;
	printf(" Enter the number of students : ");
	scanf("%d",&a);
	printf(" Enter the number of subjcts : ");
	scanf("%d",&b);
	printf(" \n\n");
	
	int arr[a][b];
	printf("Enter the roll number and marks of students : \n");
	for(int i=0; i<a; i++){
		printf("Enter new roll no. ");
		int s=0;
		for(int j=0; j<=b; j++){
			if(j!=0) printf("Marks Obtained In Subject %d\t : ",s);
			scanf("%d",&arr[i][j]);
			s++;
		}
		printf("\n");
	}
	 printf("\n\nRoll No. ");
	 for(int s=1; s<=b; s++){
	 	printf("S%d ",s);
	 }
	printf("\n\n");
	for(int i=0; i<a; i++){
			
		for(int j=0; j<=b; j++){
	
diff(i,j);
			printf(" %d",arr[i][j]);
			
		}
		
		printf("\n");
	}
	
}
