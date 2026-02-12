// display this A.P. 100 , 97 , 94 , 91 
#include<iostream>
using namespace std;
int main() {

    int max_num ;
    int diff;
    cout<<"Enter the number from where AP is starting : ";
    cin>>max_num ;
    cout<<"Enter the difference between numbers : ";
    cin>>diff;

    for (int i = max_num ; i > 0 ; i= i-diff) {
        cout<<i<<endl;
    }
}