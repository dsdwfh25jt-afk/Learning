#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main (){
	
	int g=0;
	int random;
	int n ;
	srand(time(0));
	random = rand()%100+1;
	
	
//	printf (" Enter any number between 1 to 100 : ");
//	scanf("%d",&n);

do{
	printf(" Guess the number betweeen 1 to 100 \n");
	scanf("%d",&n);
	if (n>random){
		printf(" Try lower number ! \n");
	}
	else if (n<random){
		printf(" Try higher number ! \n");
	}else if (n==random){
		printf(" You guessed right , in %d Attempets .",g);
		
	}
	g++;
}while (n!=random);
	
	
	
	
}
