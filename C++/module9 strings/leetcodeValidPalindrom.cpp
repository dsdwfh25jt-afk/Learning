#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool isPalindrome(string s) {
        
        for ( int i =0 ; s[i] != '\0'; i++) {
            s[i-1] = tolower(s[i-1]);
            if ( int (s[i]) < 65 || (int(s[i]) > 91 && int(s[i]) < 97) || int (s[i]) > 127 ) {
               
                
                s.erase(s.begin()+i);
                
            }
        }
         string rev  = s ;
        
        reverse(s.begin(),s.end());
        // 
        cout << s << endl;

        if( s == rev ) return true ;
        else return false;
    }

int main () {

    string str ;
    getline(cin,str);
    cout << isPalindrome(str);
}