#include<iostream>
#include<string>
using namespace std;

 void remove(string s , string og , int idx) {
    if (og.length() == idx) {
        cout << s << endl;
        return ;
    }

    if (og.at(idx) == '0') {
        remove(s,og,idx+1);
    }else {
        remove(s+og.at(idx),og, idx+1);
    }
}

int main () {
    string s = "";
    int a = 760003456;
    remove(s,to_string(a),0);

}