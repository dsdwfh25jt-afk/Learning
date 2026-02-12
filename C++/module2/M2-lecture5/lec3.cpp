// find the greatest number from 3 integers 
#include<iostream>
using namespace std;
int main() {
    int num1 , num2 , num3 ;
    cout<<"Enter first Number : ";
    cin>>num1;
    cout<<"Enter second number :";
    cin>>num2;
    cout<<"Enter third number :";
    cin>>num3;


    if ( num1 > num2 && num1 > num3) {
        cout<<num1<<" is greatest number from three "<<endl;
    }else
    if (num3 < num2) {
            cout<<num2<<" is the greatest number from three"<<endl;
    }else {
            cout<<num3<<" is greatest number from three"<<endl;
        }
}
