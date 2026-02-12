#include<stdio.h>

int grid (int sr, int sc, int er , int ec ){
	int downways = 0;
	int rightways = 0;
	
	if(sr==er && sc == ec ) return 1;
	
	if (sr == er ){
		rightways += grid (sr, sc+1, er , ec );
		
	}else 	if (sc == ec ){
		downways += grid (sr+1, sc, er , ec );
		
	}else if (sr<er && sc < ec ){
		downways += grid (sr+1, sc, er , ec );
			rightways += grid (sr, sc+1, er , ec );
	}
	
	
	return downways + rightways ;
	
	
	
}
int main (){
	
	int n, m;
	
	printf("Enter the vaclue of n : ");
	scanf ("%d",&n);
	printf("Enter the value of  m : ");
	scanf("%d",&m);
	
	int totalways = grid ( 1,1,n,m);
	
	printf("The total ways for destination : %d",totalways);
	
}
