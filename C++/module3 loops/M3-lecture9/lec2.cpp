// wap to print sum of digit of number 
#include<iostream>
using namespace std;
int main() {
    int num1 ;
    cout<<"Enter a Non Zero Number : ";
    cin>>num1;
    int count =0;
    int sum = 0;
    while (num1>=1)
    {   sum += num1%10;
        num1/=10;
        count++;
   }
    cout<<"Total Sum of digits are : "<<sum<<endl;
    cout<<"Total Number of digits are : "<<count<<endl;
}