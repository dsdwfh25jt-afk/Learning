// pascles triangle with low space complexity 

#include<iostream>
using namespace std;
int main() {
    int rows ;
    cout<<" Enter the number of rows : ";
    cin>> rows;

    for ( int i = 0; i <= rows ; i++) {
        int current = 1;
        for ( int j = 0 ; j <= i; j++) {
            cout<<current;
            cout<<" ";
            current = current*(i-j)/(j+1);
        }
        cout<<endl;
    }
}