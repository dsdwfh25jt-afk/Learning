#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string str = "ABCDEF";
    cout << str <<endl;
    reverse(str.begin()+1,str.begin()+4);
    cout << str <<endl;
}