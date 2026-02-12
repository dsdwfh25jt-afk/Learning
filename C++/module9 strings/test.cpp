#include<iostream>
using namespace std;
int main() {
    char ch = ' ';
    cout << int (ch) << endl;
    int num = static_cast<int> (ch);    // for type casting
    
    cout << num << endl;
}