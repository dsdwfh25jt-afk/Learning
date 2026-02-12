// write arethmetic progretion upto n 
// example 1 3 5 7 9 
#include<iostream>
using namespace std;
int main() {
    int num1 ;
    cout<<"Enter the number of values : ";
    cin>>num1;

    for (int i = 1; i < (2 * num1); i = i + 2 ) {
        cout<<i<<endl;
    }

    // second way
    /* 
    int num = 1 ; 
    for (int i = 1 ; i <=num1 ; i++) {
        
        cout<<num<<endl;
        num +=2 ;
    }
     */
    

}
