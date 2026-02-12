// print good morning n number of time where n will be taken from user 
#include<iostream>
using namespace std;
void gm (int);
int main () {
    cout <<"Enter the number of time you want to pront Good Morning : " ;
    int n;
    cin >> n ;
    gm(n);
}
void gm(int n) {
    if (n==0) return;
    gm(n-1);
    cout << n << ") Good Moerning ..." << endl;
}