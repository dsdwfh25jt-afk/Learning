// sort the given array in the order where negative number will apperar at begining and non negative at end 

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main () {
    vector<int> vec  {1,-2,3,-6,1,-10,11,-3,1,1,23,-3,-7};
    
    for ( int i = 0 ; i < vec.size(); i++ ) cout << vec.at(i)<< " ";
    cout << endl;

    // this is the simplest way to do 
    // sort(vec.begin(), vec.end());
    int j = vec.size()-1;
    int i = 0;
    while(i  <  j) {
        if (vec.at(i) > 0 && vec.at(j) < 0 ) {
            int temp = vec.at(i);
            vec.at(i) = vec.at(j);
            vec.at(j) = temp ;
            j--;
            i++;
        }
        if (vec.at(i) < 0) i++;
        if (vec.at(j) > 0) j--;
    }
    
    for ( int i = 0 ; i < vec.size(); i++ ) cout << vec.at(i)<< " ";
    cout << endl;
    

    
}