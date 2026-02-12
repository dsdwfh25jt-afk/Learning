#include<iostream>
using namespace std;
void pip( int n ) {
    if (n==0) return ;
    cout<< n;
    pip(n-1);
    cout<<n;
    pip(n-1);
    cout<<n;
}

int main () {
    cout << "Enter the max Number :";
    int n ;
    cin >> n;
    pip(n);
}