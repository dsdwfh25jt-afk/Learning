// sort the array which have values 0s and 1s 

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main() {
    vector<int> vec = {0,1,0,1,1,1,1,1,0,0,0,1,1,1,0,0,0,0,1,0,1,0,1,1};

    // first couting the total number of zeros 
 int coz = 0 ; 
    for (int i = 0 ; i < vec.size(); i++) {
        if (vec[i] == 0) {
            coz++;
        }
    }
   
    // first coz (count of zero) elements  changing to the zero and rest ones 
    for (int i = 0 ; i < vec.size(); i++) {
        if (i < coz ) vec[i] = 0 ;
        else vec.at(i) = 1 ; 
    }
   
    // printing all the vector 
    for (int i = 0 ; i < vec.size(); i++) {
        cout<<vec.at(i)<< " ";
        
    }
   
}