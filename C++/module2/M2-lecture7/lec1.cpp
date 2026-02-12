// check wheather input is divisible by 5 or 3 but not 15

#include<iostream>
using namespace std;
int main() {
    int num1;
    cout<<"Enter the number :";
    cin>>num1;
    
    if (num1%3==0 || num1%5==0) {
        if (num1%15 != 0){
            cout<<"the number is divisible by 3 or 5 but not 15";
        }else {
            cout<<"The number is divisible by 5 or 3 but also 15 ";
        }
    }else {
            cout<<"The number is not divisible by 3 or 5 or 15 ";

    }

    // one more way to do this 
     /*
        if ( (num1 % 3 == 0 || num1 % 5 ==0) || num1 %15 !=  0 ){
            cout<< "Number is divisible by 3 or 5 but not 15 ";
            
        }
     */
}