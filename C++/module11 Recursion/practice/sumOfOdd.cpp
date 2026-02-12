//  Write a program to calculate the sum of odd numbers between a and b (both inclusive) using 
// recursion.

#include<iostream>
using namespace std;

int sum ( int  a , int b) {
    if (a > b) return 0;
    if (a%2 == 0){
        return  sum (a+1,b);
    }
    return a + sum (a+2, b);
}

int main () {
    int m, n;

    cout << "Enter the number from you want to start : ";
    cin >> n;
    cout << "Enter the number until you  want to go : ";
    cin >> m;

    cout << sum (n , m);
}