#include <stdio.h>
int reverse (int arr[], int start , int end) {
	for (int i=start,j=end; i<j; i++,j--) {
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]= temp;
	}
}
int print( int arr[], int size) {
	for(int ele=0; ele<size; ele++) {
		printf("%d ",arr[ele]);
	}
}
int main() {
	int size;
	printf("Enter the size of the array : ");
	scanf("%d",&size);
	int arr[size];
	
	for(int element=0; element<size; element ++) {
		printf("Enter the element number %d\n",element+1);
		scanf("%d",&arr[element]);
	}
		
	int k ;
	printf("Enter the number that time you want to put last element on first : ");
	scanf("%d",&k);
	k=k%size;
	
	reverse(arr,k,size-1);
	reverse (arr,0,k-1);
	reverse (arr,0,size-1);
	print(arr,size);
	
}


// this was the practice programme

