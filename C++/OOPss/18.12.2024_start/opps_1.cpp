#include<iostream>
using namespace std;

class Student{ //  Student is a new user defined data type 
public : 

string name;
int Rno;
float gpa;

  
};

int main() {
    // starting oops 
    // basic code of user defined data type 

    Student s ; 
    // in this Student is a class and s is the object 
    
    // we can access the variables from . (DOT) operator 
    s.name = "Gaurav";
    s.gpa = 4.5;
    s.Rno = 55 ;
    cout << " Enter the name of student 1 : ";
    getline(cin , s.name); 
    cout<< "The  name of the student is : "<<s.name<<endl; 
    cout<< "The  gpa of the student is : "<<s.gpa<<endl;
    cout<< "The  Roll Number of the student is : "<<s.Rno<<endl;
}