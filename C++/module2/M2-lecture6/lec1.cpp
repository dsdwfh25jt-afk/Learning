// WRITE A PROGRAM TO CHECK A CHARACTER IS ALPHABET OR NOT 
#include<iostream>
using namespace std;
int main() {
    char character ;
    cout<<"Enter a character ...";
    cin>>character;

    // int num1 = int (character);
    // if (num1 > 64 && num1 < 91 ){
    //     cout<<"the character is alphabet "<<endl;
    // }
    // else if (num1 > 96 && num1 < 123 ){
    //     cout<<"the character is alphabet "<<endl;
    // }else
    // { 
    //     cout<<"The character is not a alphabet "<<endl;
    // }


    
    int num1 = int (character);
    if ( ( num1 > 64 && num1 < 91 )  || (num1 > 96 && num1 < 123 ) ){
        cout<<"the character is alphabet "<<endl;
    }else {
        cout<<"The character is not a alphabet "<<endl;
    }
}