// passing vectors to functions 

#include<iostream>
#include<vector>
#include<algorithm> 

using namespace std;
// to change vector from function we have to catch the address of the vec in that function and pass the vec name 
void change(vector  <int> &vect) { 
    vect.at(1) = 10 ;
    vect.at(2) = 11 ; 
}

int main() {
    vector<int> vec ;
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);

    for ( int i = 0 ; i < vec.size() ; i++) {
        cout << vec.at(i)<< " ";
    }

    cout << endl;

    change(vec);

    cout << "Printing after passing into function "<<endl;

    
    for ( int i = 0 ; i < vec.size() ; i++) {
        cout << vec.at(i)<< " ";
    }
}