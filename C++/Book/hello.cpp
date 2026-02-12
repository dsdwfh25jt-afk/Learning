#include<iostream>
#include<Windows.h>
#include<string>
using namespace std;
int main () {
    cout << "Enter the line : ";
    string s;
    getline(cin,s);

    for ( int i  = 0 ; i < s.length(); i++) {
        for ( int j = 0 ; j <= i ; j ++ ) {
            for ( int k = 97; k <= int(s.at(i)); k++){
                cout << char(k);
                Sleep(11);
            }
            cout << endl;
            // cout << s.at(i);
            Sleep(11);
        }
        cout << endl;
    }
}