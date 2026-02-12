#include <stdio.h>
int main() {
	
	int arr[5][6][7];
	
	for (int i=0; i<5; i++) {
		for(int j=0; j<6; j++) {
			for (int k=0; k<7; k++){
				
				scanf("%d",&arr[i][j][k]);
			}
			
		}
		
	
	}
	
		for (int i=0; i<5; i++) {
		for(int j=0; j<6; j++) {
			for (int k=0; k<7; k++){
				scanf("%d",&arr[i][j][k]);
			}
			printf("\t");
		}
		printf("\n");
	}
}

