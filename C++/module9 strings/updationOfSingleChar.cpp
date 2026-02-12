#include<iostream>
using namespace std;
int main() {
    string str;
   

    getline(cin,str);

    // str[1]= 'o';  // in C++ strings are mutable 
    cout << str << endl;

    // repalce the even index of string by a 

    for ( int i=0; str[i]!='\0';i++) {
        if (i%2==0) {
            str[i] = 'a';
        }
    }

    cout << str << endl;
    
}