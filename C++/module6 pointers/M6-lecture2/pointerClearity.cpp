// pointer understanding 
#include<iostream>
using namespace std;
int main(){
    int number = 7 ;

    int *number1 = &number ;
    int **number2 = &number1 ;
    int ***number3 = &number2 ;
    int ****number4 = &number3 ;
    // when we are pointing address of address we have add extra stars 

    cout<<"the value of number1 is : "<<number1<<endl;
    cout<<"the value of number2 is : "<<number2<<endl;
    cout<<"the value of number3 is : "<<number3<<endl;
    cout<<"the value of number4 is : "<<number4<<endl;
    
    cout<<endl;

    cout<<"the value of *number1 is : "<<*number1<<endl;
    cout<<"the value of **number2 is : "<<**number2<<endl;
    cout<<"the value of ***number3 is : "<<***number3<<endl;
    cout<<"the value of ****number4 is : "<<****number4<<endl;
    
    cout<<endl;

    cout<<"the value of number4 is : "<<number4<<endl;
    cout<<"the value of *number4 is : "<<*number4<<endl;
    cout<<"the value of **number4 is : "<<**number4<<endl;
    cout<<"the value of ***number4 is : "<<***number4<<endl;
    cout<<"the value of ****number4 is : "<<****number4<<endl;
    
    cout<<endl;

    cout<<"the value of number3 is : "<<number3<<endl;
    cout<<"the value of *number3 is : "<<*number3<<endl;
    cout<<"the value of **number3 is : "<<**number3<<endl;
    cout<<"the value of ***number3 is : "<<***number3<<endl;
    
    cout<<endl;

    cout<<"the value of number2 is : "<<number2<<endl;
    cout<<"the value of *number2 is : "<<*number2<<endl;
    cout<<"the value of **number2 is : "<<**number2<<endl;

    cout<<endl;

    cout<<"the value of number1 is : "<<number1<<endl;
    cout<<"the value of *number1 is : "<<*number1<<endl;

    cout<<endl;

    cout<<"the value of number is : "<<number<<endl;
    
    


}