
#include<stdio.h>
int slides (int n, char s, char h, char d){
	
	if (n==0) return 0;
	slides (n-1, s, d,h);
	printf("%c --> %c\n", s,d);
	slides (n-1, h, s,d);
	printf("\n");
	return 0;
	
	
}
int main (){
	
	int n;
	printf(" Enter the number of slides / bricks : ");
	scanf("%d",&n);
	slides(n,'A','B','C');
	
}
