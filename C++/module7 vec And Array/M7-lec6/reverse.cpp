// cope one array to another into reverse order 

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums1 = {1,2,3,4,5,6,7,8,9};
    vector<int> nums2 ;

    for ( int i = 0 ; i < nums1.size(); i++ ) {
        int add  = nums1[nums1.size()-i-1];
        nums2.push_back(add);
    } 


    for ( int j = 0 ; j < nums2.size() ; j++) {
        cout << nums2.at(j) << " ";
    }
}