#include<iostream>
#include<string>
using namespace std;

class binary {
    string s;
    void chkBinary (void);
public : 
    void getBinary(void);
    void onesCom (void);
    void display(void);
};

void binary :: onesCom(void)  {
        chkBinary ();
        for ( int i = 0 ; i < s.length() ; i++) {
            if ( s.at(i) == '1') s.at(i) = '0';
            else s.at(i) = '1';        
        }
        display ();
    }
    
void binary :: display(void) {
        for ( int i = 0 ; i < s.length() ; i++) {
            cout << s.at(i);         
        }
    }

void binary :: getBinary(void) {
        cout << "Enter the Binary number : " << endl;
        cin >> s ;
    }

void binary :: chkBinary(void) {
        for ( int i = 0 ; i < s.length() ; i++) {
            if ( s.at(i) != '1' && s.at(i) != '0') {
                cout << "The number is not binary !!! " << endl;
                exit(0);
            }
        }
    }
int main () {
    binary s;
    s.getBinary();
    s.onesCom();
}
