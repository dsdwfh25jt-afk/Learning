#include<iostream>
#include<string>
#include<algorithm> // for maximum built in function use this 
using namespace std;
int main() {
    string str = "Hi I'am Gaurav Bhat ";

    // finding size 
    // .size()  / .length()
    cout << str.size() << endl;
    cout << str.length() << endl;

    // pushing single character in string 
    // .push_back()
    cout << str << endl;
    str.push_back('.'); // we can only push a single character 
    cout << str << endl;

    // Deleting last character from the string
    // .pop_back()
    cout << str << endl;
    str.pop_back();
    cout << str << endl; 

    // plus ( + ) operator in strings 
    // the plus operator adds 2 or multiple strings 
    // plus operator basically apend the string 
    // apend means aage lagana means last me lagana 
    // we can't append number in strings 

    string fname = "Gaurav ";
    string lname = "Bhat";
    string flname = fname + lname ; 
    cout << fname <<endl;
    cout << lname <<endl;
    cout << flname << endl;
    // we cant use minus or subtract 
    // flname = flname - lname ;
    // couot << flname << endl;

    flname = "Code with " + fname;
    cout <<flname <<endl;
    flname =  fname + "The Coder ";
    cout <<flname <<endl;


    // To reverse the string 
    // reverse()  
    string rev = "Gaurav" ;
    cout << rev <<endl;
    reverse(rev.begin(), rev.end());
    cout << rev <<endl;

    // string rev = " Gaurav " ;
    cout << rev <<endl;
    reverse(rev.begin()+2, rev.end()-2);
    cout << rev <<endl;







}