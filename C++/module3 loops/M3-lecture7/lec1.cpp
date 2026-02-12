// break and continue statement
#include<iostream>
using namespace std;
int main() {
    // write a program to check weather number is prime or not 
    // prime nummber is the number which does not have factors without 1 and the number itself

    int num1 ;
    cout<<"Enter a number :";
    cin>>num1;
    bool flag = false;

    for (int i = 2 ; i < num1; i++) {
        if (num1 % i == 0 ) {
            flag = true;
            break; // use for terminate the current proccess
        }
    }

    if (flag == true) {
        cout<<"It is a Composite Number ";
    }else cout<<"It is a prime Number ";

}