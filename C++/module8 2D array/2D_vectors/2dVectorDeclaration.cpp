#include<iostream>
#include<vector>
using namespace std;
int main() {
    // vector<int> vec(5,2);
    // // 5 is the size of the vector and 2 is by default element inside the vector 
    // cout << vec[0] << endl;
    // cout << vec[1] << endl;
    // cout << vec[2] << endl;
    // cout << vec[3] << endl;
    // cout << vec[4] << endl;
    
    // 2 D vector initializatoion 
    vector<vector<int>> vec(3,vector<int>(4,99));
    // vec is the name of the vector 
    // 3 is the size of vector which is going to store vector 
    // vector <int> is the type of the vector in first vector 
    // 4 is the size of vector of vectors 
    // and last 99 is the default value in each vector element of the all coloumn vector

     for( auto& i : vec) {
        for (int j : i) {
            cout << j << " ";
        }
        cout << endl;
     }


     // how to print size of 2D vectors 

     // printing size of rows : 
     cout<< vec.size() << endl;

     // printing size of cols : 
     cout << vec[0].size() << endl;





}