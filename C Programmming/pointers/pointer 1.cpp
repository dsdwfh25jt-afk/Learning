#include<stdio.h>
#include<unistd.h>
int main (){
	
	int a;
	scanf("%d",&a);
	
	for (int i=1; i<=a; i++){
		int g=1;
		
		printf("%p\n",&g); //  %p is used to print address 
		g++;

		usleep(999999);
	}
	
}


/*

in this code value of address is not changing b coz after compilation  only value is changing of alloted address of g not changing the address 

*/
