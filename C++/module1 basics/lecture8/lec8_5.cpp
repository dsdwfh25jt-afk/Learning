// calculating simple interest 
// by taking input from user of principle , rate and time 
#include<iostream>
using namespace std; 
int main() {
    float principle ; // in any currency 
    float rate ; // in persent 
    float time ; // in years 

    cout<<"Enter the amaount of principle : ";
    cin>>principle;
    cout<<"Enter the rate of interest : ";
    cin>>rate;
    cout<<"Enter the time period : ";
    cin>>time;


    float simpleInterest ;
    simpleInterest = (principle * time * rate) / 100 ;
    cout<<"The Simple Interest is : "<<simpleInterest<<endl;

}