// if an array contains n elements , then check if the given array is a 
// palindrome or not .
// palindrome means for example ... 
// 1)         1 2 3 4 5 4 1 2 3

#include <stdio.h>
void arrayPrint(int arr[], int size) {
	for (int element_1=0; element_1<size; element_1++) {
		printf("%d ",arr[element_1]);
	}	
}
void checkPalindrome ( int arr[], int size ) {
	int i=0;
	int j=size-1;
	int count=0;
	while (i<j){
		if(arr[i]==arr[j]){
			count++;
		}			
	j--;
	i++;
}
if( count == size/2) {
			printf("The given array is palindrome \n");
	}else printf("The gien array is not a palindrome .\n"); 
}
int main() {
	int size;
	printf("\nEnter the size of the array : ");
	scanf("%d",&size);
	int arr[size];	
		for ( int element_1; element_1<size; element_1++) {
	printf("Enter the element number %d \n",element_1+1);
		scanf("%d",&arr[element_1]);
	}
    checkPalindrome (arr,size );
    
    printf(" The array you have given : \n  ");
	arrayPrint( arr, size);
}
