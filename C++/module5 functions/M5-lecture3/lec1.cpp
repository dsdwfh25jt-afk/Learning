// main function 
#include<iostream>
using namespace std;
int sum( int x , int y){
    return x+y;
}
int main () {

    int num1;
    int num2;
    cout<<"Enter the value of num1 : ";
    cin>>num1;
    cout<<"Enter the value of num2 : ";
    cin>>num2;

    cout<<sum(num1,num2);

}