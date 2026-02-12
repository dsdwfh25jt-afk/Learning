// take input of an integer and state wheather it is deivisible by 5 and 3 or not 
#include <iostream>
using namespace std;
int main() {
    int num1 ;
    cout<<"Enter an Integer : ";
    cin>> num1;

    if (num1%3 == 0 && num1%5 == 0) { 
        cout<<"Given input is divisible by 5 and 3 ";
    }else {
        cout<<"Given input is not divisible by 5 and 3 ";
    }
}