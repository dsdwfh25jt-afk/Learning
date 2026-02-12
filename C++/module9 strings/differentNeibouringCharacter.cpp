#include<iostream>
// #include<string>
// #include<algorithm>
using namespace std;
int main () {
    string  s ; 
    cout << "Enter the string : ";
    getline(cin, s);
    int size = s.length();
    int count = 0 ;
    for ( int i = 0 ; i<size; i++) {
        if ( size == 1) break;
        if(size == 2 && s[i] != s[i+1])  {count++; break; }
        if (i==0) {
            if (s[i]!=s[i+1]) count++;
        }
        else if (i==size-1){ 
            if (s[i] != s[-1]) count++;
        }else if (s[i] != s[-1] && s[i]!=s[i+1]) count++; 
        else i++;
      

    }

    cout << count << endl;
}