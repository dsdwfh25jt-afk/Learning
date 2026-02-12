// power calculator 

//  Code by learn by Copilot

#include<iostream>
using namespace std;
int power ( int x , int n ) {
    if ( n == 1) return x; // returning x raised to 1 ... x 
    if ( n == 0) return 1; // returning x raised to 0 ... 1

    int half = power(x,(n/2)); // assigning power to variable half 
    
    if ( n % 2 == 0 ) {
        return half * half;  // returning n/2 * n/2
    }else {
        return x * half * half; // returning x * n/2 * n/2
    }
}

int main () {
    cout << power (2,10);
}