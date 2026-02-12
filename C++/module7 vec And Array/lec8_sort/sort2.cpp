// sort the array which have values 0s and 1s 

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main() {
    vector<int> vec = {1,1,0,1,0,1,1,0};

    // sort(vec.begin() , vec.end());
    int i = 0 ; 
    int j = vec.size()-1;

    while (i < j ) {
    
    if (vec[i] == 1 && vec[j] == 0) {
        int temp = vec[i];
        vec[i] = vec[j];
        vec[j] = temp ;
        i++;
        j--;
    }
    if (vec[i] == 0) i++;
    if (vec[j] == 1) j--;  
    } 

    for ( int i = 0 ; i < vec.size() ; i++) cout << vec.at(i) << " ";
    cout << endl;
}