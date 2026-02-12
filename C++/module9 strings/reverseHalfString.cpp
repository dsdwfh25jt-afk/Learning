#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string str ;
    cout << "Enter even length string ";
    getline(cin,str);

    // reversing half of the string 
     int size = str.size();
     reverse(str.begin(),str.begin()+size/2);
     cout << str << endl;



     // changing fname to lname 
     // condition is fname and lname should be same number of length 
    // int size = str.size();
    // reverse(str.begin(),str.begin()+size/2);
    // reverse(str.begin(),str.end());
    // reverse(str.begin()+size/2,str.end());


    // reverse(str.begin(),str.begin()+size/2);
    // reverse(str.begin()+size/2,str.end());
    // cout << str << endl;


}