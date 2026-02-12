// num1 raised to num2 
#include<iostream>
using namespace std;
int main() {
    int num1 ;
    int num2 ;
    cout<<"For num1 raised to num2"<<endl;
    cout<<"Enter num1 : ";
    cin>>num1;
    cout<<"Enter num2 : ";
    cin>>num2;
    float product = 1 ;

    bool flag = true ; // this means number is possitive 

    if (num2 < 0) {
        flag = false ;
        num2 = -num2 ;
    }
    for(int i =1 ; i <= num2 ; i++) {
        product *= num1 ;

    } 

    if(flag == false) {
        product = 1/product;
        num2 = -num2 ;
    }   

    if (num2 == 0 && num1 == 0) {
        cout<<"please enter non zero numbers : ";
    }else {
        cout<<product;
    }


}