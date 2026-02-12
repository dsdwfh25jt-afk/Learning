#include<stdio.h>
int fact(int n){
if(n==0) return 1;

printf("%d\n",n);
int a= n*fact(n-1);
printf("%d\n",n);

return a;

}

int main(){
int n;
printf("Enter the value of n: ");
scanf("%d",&n);

int x= fact(n);
printf("%d",x);
}

