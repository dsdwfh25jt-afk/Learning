#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main () {
    string s ;
    cout << "Enter the string (only lowercase)";
    getline(cin,s);

    sort(s.begin(), s.end());
    vector<int> v(26,0); // using empty vector for character occuration 

    // traveling complete string for check character  
    for ( int i=0; i < s.length(); i++) {
        v[(int)s[i] - 97] ++ ; 
    }
    int max = 0 ; 

    // checking max occured character 
    for ( int i =0; i<v.size(); i++) {
        if (max < v[i]) max = v[i];
    }

    // checking and printing max occured characters 
    for ( int i =0 ; i < v.size(); i++) {
        if (v[i] == max) {
            cout << v[i] << " " <<  char (i+97) << endl;
        } 
    }

} 