#include<stdio.h>
int main(){
	
	int n;
	printf(" Enter the number of rows : ");
	scanf("%d",&n);
	
	int nsp=1;
	int nst=n-1;

for(int i=1; i<=n*2-1; i++){
	
		
	
	if(i<=n){
			printf("%d",i);
	}else {
		printf("%d",2*n-i);
	}
}
printf("\n");

	
	
	int j=1;
	for (int a=1; a<=n; a++){
		
	
		
			int k = n-j;
		
		
		for( int b=1; b<=nst; b++){
			printf("%d",b);
		}
		for(int v=1; v<= nsp; v++){
			printf(" ");
			
		}
		for( int c=1; c<=nst; c++){
			printf("%d",k);
			k--;
		}
		nst--;
		nsp+=2;
		j++;
		printf("\n");
	}
}





