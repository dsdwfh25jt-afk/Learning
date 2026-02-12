// take input month number from the user and print how many days present in the month 
// using switch case statement 

#include<iostream>
using namespace std;
int main() {
    int month ;
    cout<<"Enter month number : ";
    cin>>month;

    switch (month) {
        case 1 : 
            cout<<"Number of days are : 31 ";
            break;
        case 2 : 
            cout<<"Number of days are : 28";
            break;
        case 3 : 
            cout<<"Number of days are : 30";
            break;
        case 4 : 
            cout<<"Number of days are : 31";
            break;
        case 5 : 
            cout<<"Number of days are : 30";
            break;
        case 6 : 
            cout<<"Number of days are : 31";
            break;
        case 7 : 
            cout<<"Number of days are : 30";
            break;
        case 8 : 
            cout<<"Number of days are : 31";
            break;
        case 9 : 
            cout<<"Number of days are : 30";
            break;
        case 10 : 
            cout<<"Number of days are : 31";
            break;
        case 11 : 
            cout<<"Number of days are : 30";
            break;
        case 12 : 
            cout<<"Number of days are : 31";
            break;
        default : 
            cout<<"Enter valid month number";
            break;
        
    } 
}