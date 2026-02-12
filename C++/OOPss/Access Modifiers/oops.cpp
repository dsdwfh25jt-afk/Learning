#include<iostream>
using namespace std;

class Student {
    int age;
    int rollno;
    public : 
    string name;
    
    Student(int age , int rollno , string name) {
        this->age = age;
        this->rollno = rollno;
        this->name = name;
    }
    void display(void) {
        cout << "Name of the Student : " << name << endl;
        cout << "Age of the Student : " << age << endl;
        cout << "Roll No of the Student : " << rollno << endl;
    }
    void change(int rollNo) {
        rollno = rollNo;
    }

};

int main () {
        Student Eg(20, 55 ,"Garry");
        cout << Eg.name<< endl;
        Eg.display();  // this is getter fucntion to fetch the private member value 

       //  cout << Eg.rollno << endl;  --> this will throw error 
        Eg.change(71); // that's how we can access the proivate members 

        cout << "After changing the Roll Number ... " << endl;

        Eg.display(); 


}