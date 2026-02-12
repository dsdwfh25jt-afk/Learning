#include<iostream>
using namespace std;
int main() {
    int num1 = 5 ;
    float num2 = 2 ;
    char num3; // this will print char on that number of ascii value 
    num3 = num1 / num2 ;
    cout<<num3<<endl;
    // cout<<num1 / num2<<endl;
    bool boo = num1 / num2 ;
    cout<<boo<<endl;

    

    /*
    more 
    
    int / int will always int 
    int / float will depends on where we store and what is output 
    flaot = int / float  ans == float 
    int = int / float  ans ==  int 
    int = int / int   ans == int 
    double = int / float  ans == double 
    char = int / flaot  ans == char   -- ascii values elements 
    bool = int / float  ans == bool 


    basically ans will depends on the data in which we are storing it 
    whaever will be data in which we are storing it will become that data type
    wheather it is bool , char , int , float , double ...etc

    if we print directly they it will depends on answer type : 
    int / float 
    print wheather ans is float or int 
    
    */








    // for (short int ascii = 0 ; ascii < 256 ; ascii++ ) {
    //     char ch = ascii ; cout<<ch<<endl;
    // }

}