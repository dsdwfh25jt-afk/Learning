#include<stdio.h>

int grid (int er , int ec ){
	int downways = 0;
	int rightways = 0;
	
	if(er==1 && ec == 1 ) return 1;
	
	if (er==1 ){
		rightways += grid ( er , ec-1 );
		
	}else 	if (ec==1 ){
		downways += grid ( er-1 , ec );
		
	}else if (er>1 && ec>1 ){
		downways += grid ( er-1 , ec );
			rightways += grid ( er , ec-1 );
	}
	
	
	return downways + rightways ;
	
	
	
}
int main (){
	
	int n, m;
	
	printf("Enter the vaclue of n : ");
	scanf ("%d",&n);
	printf("Enter the value of  m : ");
	scanf("%d",&m);
	
	int totalways = grid (n,m);
	
	printf("The total ways for destination : %d",totalways);
	
}
