
//  accesing array from another function ... 


#include<stdio.h>
int fun(int  arr[]){
	arr[2]=109;
	return 0;
}
int main (){
	
	int arr[5]={1,2,3,4,5};
	fun (arr );
	printf("%d",arr[2]);
}
