#include<iostream>
using namespace std;
class Student{
 public : 
    string name;
    int age;
    int rollNo;

    Student( string n , int a , int r ) { // parameterized Constructor 
        name = n ;
        age = a ;
        rollNo = r ;
    }
    Student() {} // Defoult Constructor 
};

int main () {
    Student s1("Gaurav",20,55);
    Student s2;
    s2.name = "Gaurav";
    s2.age = 20 ;
    s2.rollNo = 55;


    cout <<s2.name << " " << s2.age << " " << s2.rollNo << endl;
    cout <<s1.name << " " << s1.age << " " << s1.rollNo << endl; 
}