#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string s ;
    cout << "Enter A string ";
    getline(cin,s);
    cout << "Complete string is "<< s <<endl;
    // printing second half of the string s using substr function 

    cout << s.substr(s.length()/2);

}