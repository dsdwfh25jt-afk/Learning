// pointers 
#include<iostream>
using namespace std;
int main() {
    int x = 12 ; // we have declared x as 12 
    int *p = &x; // we have added address of x in p not in *p
    cout<<x <<endl;
    *p = 1223 ;  // now we have updated the value of element of address in p which x 
    // means we go to the address of x which is stored in our pointer and then * means go to the value of that address so we go to the value of x 
    // and then we have updated the value 
    // basically from this line we have updated the value of x without using x 
    cout<<p<<endl;
    cout<<x<<endl;

    p = p+4; // here we are updating the address of the p by 4 ints which mean 4*4 = 16 bytes  
    cout<<p<<endl;
    cout<<x<<endl;
    cout<<*p<<endl;
}