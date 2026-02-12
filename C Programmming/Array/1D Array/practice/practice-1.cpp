// lets do Experiment

#include<stdio.h>
int main (){
	int a;
	
	
	int n ;
	printf ( " enter the size of array : ");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter the value of a  \n enter 1 for enter the elements \n  enter 2 for print the elements \n");
	scanf("%d",&a);
	do{
	if(a==1){
			for (int i=0; i<n; i++){
		
		printf(" Enter the value of element number %d : ",i+1);  
		scanf("%d",&arr[i]);                                    
	}
	}else 

	
	for (int i=0; i<n; i++){
		printf("The value you have entered for element number %d  is : %d \n",i+1,arr[i]); 
	}
	a++;
}while(a<2);
}
