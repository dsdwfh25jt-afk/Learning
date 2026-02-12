// take input from the use and state wheather it is 3 digit number or not 
#include <iostream>
using namespace std;
int main() {
    int num1 ; 
    cout<<"Enter the Number : ";
    cin>>num1;

    if (num1 < 100 && num1 > 999) {
        cout<<"Not a three digit number ";
    }else {
        cout<<"It is three digit number ";
        
    }
}