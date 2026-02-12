#include<iostream>
using namespace std;

    int power (int a , int b) {
        int k = 1 ;
        for ( int i = 1 ; i <= b ; i++ ) {
            k*=a;
        }
        return k;
    }
int main () {
    cout << power(3,4);
}