#include<iostream>
#include<string>

using namespace std;

void remove ( string s, string og , int idx) {
    if (idx == og.length() ){
        cout << s ;
        return ;
    }

    if (og.at(idx) == 'a') 
        remove( s, og, idx+1);
    else 
        remove(s+og.at(idx), og , idx+1 );
    
}

int main () {
    string s = "";
    string og = "gaurav";
    remove(s,og,0);
}