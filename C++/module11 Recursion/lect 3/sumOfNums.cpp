// print the sum of all numbers until N 
#include<iostream>
using namespace std;
int sumF ( int n) {
    if (n==0) return 0;
    int sum = n+sumF(n-1);
    return sum;
}
int main () {
    int n ;
    cout << "Enter the value of the N : ";
    cin >> n;
    int sum = sumF(n);
    cout << sum << endl;

}