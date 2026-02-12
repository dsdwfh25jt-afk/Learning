// wap to print number of digit in number 
#include<iostream>
using namespace std;
int main() {
    int num1 ;
    cout<<"Enter a Non Zero Number : ";
    cin>>num1;
    int count =0;
    while (num1>=1)
    {
        num1/=10;
        count++;
   }
   cout<<"Total Number of digits are : "<<count<<endl;
    
}