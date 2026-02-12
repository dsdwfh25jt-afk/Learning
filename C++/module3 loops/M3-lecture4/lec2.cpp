// print ap using extra variale 
#include<iostream>
using namespace std;
int main() {
    int max ;
    int start ;
    int differece ;
    // taking input of number of iterations 
    cout<<"Enter the value : ";
    cin>>max;
    // taking input of staring value 
    cout<<"Enter starting value : ";
    cin>> start ;
   // taking input of difference
    cout<<"Enter the difference ";
    cin>>differece;
    int extra = start  ;
    // generating arethmetic prograsion 
    for (int i = 1 ; i <= max ; i++) {
        cout<<extra<<endl;
        extra += differece ;

    }

}