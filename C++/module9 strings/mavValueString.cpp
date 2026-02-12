// given n strings consisting of digit from 0 to 9 return the index of string which has maximum value .

#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main () {
    int n = 0;

    vector <string> v ();
    cout << "Enter the number of strings you want to enter : ";
    cin >> n ;


    for ( int i = 0 ; i < n ; i++) {
        string s ;

        cin >> s;
        v.push_back(s);
    }

    // solving problem 

    int maxV = 0;

    for ( int i = 1 ; i < v.size(); i++) {
        int x = stoi(v[i-1]);
        int y = stoi(v[i]);
      
        if (y<x) maxV = i-1;
        if (x<y) maxV = i;
     
        

    }
    cout << " \n\n" << maxV;

}