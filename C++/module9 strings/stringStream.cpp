// print every single word of the string in a new line 

#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>

using namespace std;
int main() {
    string s = "Gaurav is an Engineering student";
    stringstream strings (s);
    string temp ;

    while (strings >> temp){
        cout << temp << endl;
    }
}