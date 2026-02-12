  // rotate the given array 'a' by k steps where k is 
 // non-negative.
// note : k can be greater than n as well where n is the size of array 'a'.


#include <stdio.h>
int reverse(int arr[], int startElement, int endElement) {
	for(int i=startElement,j=endElement; i<j; i++,j--) {
		int temp = arr[i];  // storing start element in the temp
		arr[i]=arr[j];     // storing last element in the first 
		arr[j]=temp;      // storinng start element which was stored in temp storing in the last
		
	}
}
void print(int a[], int n) {
	
	for(int i=0; i<n; i++){
		printf("%d ",a[i]);  // printing the array 
	}
}
 int main() {
	
	int n=7;
	int a[n]={ 1,2,3,4,5,6,7};
	int k;                                 // k is number of ratations 
	printf("Enter the value of k : ");
	scanf("%d",&k);   
	k=k%n;
	reverse(a,0,n-1);    // rerversing all element of  the array 
	reverse(a,0,k-1);   // reversing k element of the array 
    reverse(a,k,n-1);  // reversing remaining element of the array 
	print(a,n);       // this function is printing the array after operations 
	
	
}
