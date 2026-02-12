#include<iostream>
using namespace std;
int rec ( int n) {
    if (n==0) return -1;
    
    
    cout << n << endl;
    rec(n-1);
    // cout << n << endl;
}
int main () {
    rec(7);
}