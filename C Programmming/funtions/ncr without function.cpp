#include<stdio.h>
int main () {
	
	int n;
	int r;
	
	printf(" Enter the value of n : ");
	scanf("%d",&n);
	printf(" Enter the value of r : ");
	scanf("%d",&r);
	
	int nfact=1;
	int rfact=1;
	int n_rfact=1;
	
	for(int i=2; i<=n; i++){
		
		nfact*=i;
		
		
	}
	for (int i=2; i<=r; i++){
		rfact*=i;
		
	}
	
	for(int i=2; i<=n-r; i++){
		n_rfact*=i;
		
	}
	
	int ncr=nfact/(rfact*n_rfact);
	
	printf(" The ncr is : %d",ncr);
	
	
	
	
}
