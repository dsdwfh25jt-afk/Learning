#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main () {
    string  s;
    cout << "Enter first string : ";
    getline(cin,s); // getting first string 
    string  t;
    cout << "Enter second string : ";
    getline(cin,t); // getting second string 
    sort(s.begin(),s.end()); // sorting the string s
    sort(t.begin(),t.end()); // sorting the string t 
    if  ( s == t ) cout << "True" ; // comparing both sorted strings  
    else cout << "false"; 
    
}