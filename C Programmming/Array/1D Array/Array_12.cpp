// print total number of elements who's value is grater than m .
// and take the value of the n from the user ...
 
 #include<stdio.h> 
 int main (){
 	int m;
 	int n;
 	int count=0;
 	printf("Enter the size of the array \n");
 	scanf("%d",&n);
 	printf("Enter the number for m :");
 	scanf("%d",&m);
 	int arr[n];
 	for(int i=0; i<n; i++){
 		printf("Enter element number %d\n",i);
 		scanf("%d",&arr[i]);
	 }
	 
	 for(int i=0; i<n; i++){
	 if	(arr[i]>m) {
	 	count+=1;
	 }
	 }
	 
	 printf(" Number of element are greater than %d is : %d",m,count);
	 
	 
 }
