#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main () {
    string s ;
    cout << " Enter the string (only lowercase letters) : ";
    getline (cin,s);
    int maxCount = 0 ;
    char maxCh = ' ';
    for ( int i =0 ; s[i]!='\0';i++) {
        char ch = ' ';
        int count = 0 ;
        for (int j = i; s[j]!='\0';j++) {
            if (s[i] == s[j]) {
                count ++ ;
                ch = s[i];
                }
        }
        if (maxCount < count){
            maxCount = count ;
            maxCh = ch;

        }
    }
    cout << maxCh << endl; 
    cout << maxCount << endl;


}