// write a function to compute the greatest common divisor of two given numbers 

#include<iostream>
using namespace std;
int gcd (int num1 , int num2) {\
    int HCD = 1;
    for ( int i = 1 ; i <= min(num1,num2) ; i++) {
        if ( num2 % i == 0 && num1 % i == 0) {
            HCD = i ;
        }
    }
    return HCD;
}
int main() {
    int num1;
    cout<<"Enter the value of num1 : ";
    cin>>num1;
    int num2;
    cout<<"Enter the value of num2 : ";
    cin>>num2;
    cout<<gcd(num1 , num2);
}



// kind of better way ..
// int gcd (int num1 , int num2) {\
//     int HCD = 1;
//     for ( int i = min(num1,num2) ; i >= 1  ; i--) {
//         if ( num2 % i == 0 && num1 % i == 0) {
//             HCD = i ;
//         }
//     }
//     return HCD;
// }
