// ncr and npr 
// print the nCr of ..
// print the npr of ..

#include<iostream>
using namespace std; 

int fact (int num){
    int factorial = 1 ;
    for(int i = 1; i <=num ; i++) {
        factorial *= i;
    }
    return factorial;
}
int combination (int num1 , int num2) {
    int ncr = fact(num1)/( fact(num2)*fact(num1-num2));
    return ncr;
}
int permutation(int num1 , int num2) {
    	int npr = fact(num1)/fact(num1-num2);
}
int main() {
    int num1 ;
    cout<<"Enter the value of num1 : ";
    cin>>num1;
    int num2;
    cout<<"Enter the value of num2 : ";
    cin>>num2;
    cout<<combination(num1 , num2)<<endl;
    cout<<permutation(num1 , num2)<<endl;
}