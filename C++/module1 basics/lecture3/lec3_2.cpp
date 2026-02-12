// pre increament , post increament 
// pre decreament , post decreament
// comments
#include<iostream>
using namespace std;
int main() {

    // we write comments in double slash 
    // comments are the text which is ignored by the compiler 


    int num1 = 7 ;
    num1++; // post increament 
    num1--; // post decreament 
    ++num1; // pre increament 
    --num1; // pre decreament

    // these will increament or decreament will be by only one 


    cout<<num1++<<endl; // print 7 then it will become 8 
    cout<<++num1<<endl; // it will become 9  then print 9
    cout<<num1--<<endl; // print 9 then it will become 8 
    cout<<--num1<<endl; // it will become 7 then print 7 

    /*
    
    this is called multi line comment and 
    it is writen in 
    it start with slash star and it end with star slash  what ever we want to write and thing we want to comment we will write in between these 
    */

    bool a = true ;
    cout<<a<<endl;
    a = false ;
    cout<<a;

}

