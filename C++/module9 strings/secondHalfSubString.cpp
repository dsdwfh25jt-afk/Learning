// take a user input as even length string and print the second half of the string using inbuild function substr() 

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main () {
    string s ;
    cout << "Enter the string : ";
    getline(cin,s);
    int size = s.size() /2 ;
    cout << s.substr(size);
}