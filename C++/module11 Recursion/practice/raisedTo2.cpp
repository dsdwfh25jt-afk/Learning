#include<iostream>
using namespace std;

string power( int n ) {
    if ( n== 1) return "true" ;
    if ( n <= 0) return "false";
    if ( n % 2 != 0) return "false";

    return power(n/2);
}
int main () {
    cout <<  power(17);
}