// else if

// take input marks of a student and print the grade according to marks 
 /*
 1) 91-100 Excellent
 2) 81-90 Very good 
 3) 71-80 Good
 4) 61-70 Can do better
 5) 51-60 Avarage 
 6) 41-50 Bellow Avarage 
 7) <40 Fail
 */
#include<iostream>
using namespace std;
int main() {

    int marks ;
    cout<<"Enter Your Marks : ";
    cin>>marks;


    // if(marks >= 91){
    //     cout<<"Excellent";
    // }else  if(marks >= 81){
    //     cout<<"Verry Good";
    // }else if(marks >= 71){
    //     cout<<"Good";
    // }else if(marks >= 61){
    //     cout<<"Can Do Better";
    // }else if(marks >= 51){
    //     cout<<"Avarage";
    // }else if(marks >= 41){
    //     cout<<"Bellow Aravage";
    // }else if(marks <= 40 ){
    //     cout<<"Fail";
    // }else {
    //     cout<<"Enter Valid Number Of Marks...";
    // } 


    // we can write the upper code in optimised way 

         if(marks >= 91) cout<<"Excellent";
    else if(marks >= 81) cout<<"Verry Good";
    else if(marks >= 71) cout<<"Good";
    else if(marks >= 61) cout<<"Can Do Better";
    else if(marks >= 51) cout<<"Avarage";
    else if(marks >= 41) cout<<"Bellow Aravage";
    else if(marks <= 40) cout<<"Fail";
    else cout<<"Enter Valid Number Of Marks...";
     


    return 0;

}