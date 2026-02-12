// wap to print n th fiboache number of the series 
#include<iostream>
using namespace std;

int fibo(int n) {
    if ( n <= 1) return n ;
    cout << n << endl; 
    return fibo(n-1) + fibo(n-2) ;
}

int main () {
    cout << fibo(6);
    GAUTAM 
}