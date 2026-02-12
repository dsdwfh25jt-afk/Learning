// take possitive integer input and tell if it is divisible by 5 or not 
#include <iostream>
using namespace std;
int main() {
    int num1;
    cout<<"Enter the number : ";
    cin>>num1;

    if(num1 % 5 == 0) {
        cout<<"Given Number is Divisible By 5";
    }else {
        cout<<"Given Number is Not Divisible By 5 ";
        
    } 
}