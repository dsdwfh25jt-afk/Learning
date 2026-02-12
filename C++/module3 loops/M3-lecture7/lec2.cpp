// continue statement 
// print odd numbers 
#include<iostream>
using namespace std;
int main() {
    int num1 ;
    cout<<"Enter the max number until you want to print odd nums ";
    cin>>num1;

    for (int i = 1 ; i <= num1 ; i++) {
        if (i%2==0) continue; // to skip perticulat round 
            cout<<i<<endl;
    }
}