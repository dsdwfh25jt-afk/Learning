#include<iostream>
using namespace std;

int fibo ( int n) {
    if (n==0 || n==1) return 1;
    // return fibo(n-1)+fibo(n-2);
    // also written as 
    // the best way to right 
    int left = fibo(n-1);
    int right = fibo(n-2);
    return left + right;

}

int main () {
    cout << "Enter the number : ";
    int n ;
    cin >> n;
    cout << fibo(n);
}