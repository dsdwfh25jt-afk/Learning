// printing pattern of rectangle using stars
// number of rows and coloums take input from the user
#include<iostream>
using namespace std;
int main() {
    int rows ;
    int cols;
    cout<<"Enter Number of Rows : ";
    cin>>rows;
    cout<<"Enter Number of Cols : ";
    cin>>cols;

    for (int i = 1; i<=rows; i++) {
        for (int j = 1; j<=cols; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}