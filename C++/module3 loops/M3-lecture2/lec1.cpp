// print hello world N time using by user input 

#include<iostream>
using namespace std;
int main() {
    int iterations;
     cout<<"How many time you want to print Hello World ? ";
     cin>>iterations;
      
    for(int i = 0 ; i < iterations ; i++ ){
        cout<<"Hello World..."<<endl;
    }
}