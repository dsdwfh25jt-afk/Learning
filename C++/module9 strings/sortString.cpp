// sorting string by using in build function 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string s ;
    getline(cin,s);
    sort(s.begin(),s.end());
    // the sort function sort according to ascci value 0 to 255 
    cout << s << endl;
    
}