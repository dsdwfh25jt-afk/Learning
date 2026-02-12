// factorial using function..;

#include<iostream>
using namespace std;
int fact (int n){
    if (n==1 || n==0) return 1;
    int factorial = n * fact(n-1) ; 
    cout<< factorial<<endl;
}
int main() {
    int num1 ;
    cout<<"Enter the number : ";
    cin>>num1;
    fact(num1);
}