// write a function to print square of n natural numbers 
// n take as a agrgument to the function 

#include<iostream>
using namespace std;
int square (int n ) {
    for ( int i = 1; i <= n ; i++ ) {
        cout<<i*i<<endl;
    }
    return 0;
} 

int main() {
    int num1 ;
    cout<<"Enter max of first n number : ";
    cin>>num1;

    square(num1);
}