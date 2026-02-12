// constructors 
#include<iostream>
using namespace std;

class Student {
    public : 

    string name;
    int marks;
    int year;

    // default constructor 
    Student() {

    }

    // parameterized constructor 
    Student (string n, int m , int y) {
        name = n ;
        marks = m ;
        year = y ;

    }

    // NOTE : the same sequence of the multiple constructor should not be appered 
    // is we do so then it will throw the overloding error 


    // the following constructor is not valid due to the same seaquence of the data type passing 
    // to the another constructor 



    // Student (string M, int Y , int N) {
    //     name = M ;
    //     marks = N ;
    //     year = Y ;

    // }

    Student (string n , int y) {
        name = n ;
        year = y ;
    } 

      Student (int m , int y) {
       
        marks = m ;
        year = y ;

    }


      Student (int y , string m , int n) {
        name = m ;
        year = y ;
        marks = n ;
       

    }
};
int main () {
    
    //  Student s1("Gaurav",30,2);
    //  cout << s1.marks <<endl;
    //  cout << s1.year <<endl;
    //  cout << s1.name <<endl;
    system("cls"); // helps to clear preveous screen before printing the output 

     
    Student s("Gaurav",30,2) ;
    cout << "The name of the student is : "<< s.name << endl;
    cout << "The marks of the student is : "<< s.marks << endl;
    cout << "Year which student is pursuing : "<< s.year << endl;
    cout << endl;

    Student s1("Gaurav",2) ;
    s1.marks = 67 ;
    cout << "The name of the student is : "<< s1.name << endl;
    cout << "The marks of the student is : "<< s1.marks << endl;
    cout << "Year which student is pursuing : "<< s1.year << endl;
    cout << endl;

    Student s2(2,"Gaurav",22) ;
    cout << "The name of the student is : "<< s2.name << endl;
    cout << "The marks of the student is : "<< s2.marks << endl;
    cout << "Year which student is pursuing : "<< s2.year << endl;
    cout << endl;

    Student s3(2,22) ;
    s3.name = "Gaurav Kiran Bhat";
    cout << "The name of the student is : "<< s3.name << endl;
    cout << "The marks of the student is : "<< s3.marks << endl;
    cout << "Year which student is pursuing : "<< s3.year << endl;
    cout << endl;


}