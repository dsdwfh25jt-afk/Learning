#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> nums1 = {1,4,5,6,7,0,0,0,0,0} ;
    vector<int> nums2 = {2,3,5,8,9} ;

    int m = 5 ;
    int n = 5 ;


     int size = m+n-1 ;
        int m1 = m-1 ;
        int n1 = n-1 ;
        
        while (size >= 0 && m1 >= 0 && n1 >= 0  ){
            if (nums1 [m1] >= nums2[n1] ) {
                nums1[size]=nums1[m1];
                size--;
                m1--;
            }else{
                nums1[size] = nums2[n1];
                size--;
                n1--;
            }
           
        }


for ( int i = 0 ; i < nums1.size(); i++ ) cout << nums1.at(i)<<" ";


}