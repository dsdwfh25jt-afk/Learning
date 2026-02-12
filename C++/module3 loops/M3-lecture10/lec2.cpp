#include<iostream>
using namespace std;
int main() {
    int num1 ;
    cout<<"Enter the Number : ";
    cin>>num1;
    int sum = 0;


    // for (int i = 1; i <= num1; i++) {
    //     if (i%2 != 0 ) {
    //         sum += i;
    //     }else{
    //         sum-=i;
    //     }
    // }

    // int sum2 = 0;
    //  for (int i = 1; i <= num1; i++) {
    //     if (i%2 != 0 ) {
    //         sum2 -= i;
    //     }else{
    //         sum2+=i;
    //     }
    // }
    // cout<<"Total sum is : "<<sum<<endl;
    // cout<<"Total sum2 is : "<<sum2<<endl;

    // cout<<sum2 + sum ;


    // simple and easy way 
    if(num1 % 2 == 0) cout<<-num1/2;
    // if (num1 % 2 != 0) cout<< 1+num1 / 2  ;  this will give wrong ans if we give input for negative number 

    // for that we need to do like this
     if(num1 % 2 == 0) cout<<-num1/2 + num1;

}