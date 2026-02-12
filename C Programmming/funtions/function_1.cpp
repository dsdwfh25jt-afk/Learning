#include<stdio.h>

 int so(int a){
	int b;
	printf(" this  is  the fuction with no data type : \n"); 
		printf(" printing a before any operation  : %d\n",a);// printing 
			printf(" printing b before any operation  : %d\n",b);   	
         b = a+10;
		printf(" printing a+b  after operation : %d\n",a+b);
			printf(" printing b  after operation : %d\n",b);
       return b;
}
int main (){
	int a=1; // declaring int a =1 ;
//	so(a); // calling so funnction 

	
	
	printf(" this is main func : \n");
		printf("%d",so(a)); // this line is giving 11 as per expectation 
	
}
