 #include<stdio.h>
 int main(){
 	
 	int n;
 	printf(" Enter the number of rows : ");
 	scanf("%d",&n);
 	int nsp=n/2;
 	int z=n/2;
 	
 	for(int i=1; i<=n; i++){
 		if(i<=z){
 			for(int a=1; a<=nsp; a){
 				printf(" ");
 				nsp--;
			 }
			 for(int b=1; b<=(i*2)-1; b++){
			 	printf("*");
			 	
			 }
		 }else{
		 		for(int a=1; a<=nsp; a++){
 				printf(" ");
 			
			 }
			 for(int c=1; c<=z; c++){
			 	printf("*");
			 	c++;
			 }
		 	
		 	
		 }
		 printf("\n");
	 }
 }
