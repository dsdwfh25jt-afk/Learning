// if array index is even then double the value of array element 
// and if array index is odd then add 10 in the element of array ...

#include<stdio.h>
int main (){
	int a;
	printf(" Enter the value of array ...");
	scanf("%d",&a);
	int n[a];
	for(int i=0; i<a; i++){
		printf(" Enter element number %d\n",i);
		scanf("%d",&n[i]);
	}
		for(int i=0; i<a; i++){
		if (i%2==0|| i==0) {
			n[i]*=2;
			}
		else {
			n[i]+=10;
		}
	}
	
		for(int i=0; i<a; i++){
		printf("%d\n",n[i]);
		
	}
}
