#include<iostream>
using namespace std;

class Student{
    public : 
     string name;
     int age;

    //  Student (ing age, string name) {
    //     this-> name = name;
    //     this-> age = age;

    // }

     Student (string name , int age) {
        this->name = name;
        this->age = age;

    }

    Student (int age , string name) {
       
        this->age = age; // by using this keyword we can give same name in class data type and function data type 
         this->name = name;

    }

    void print()const {
        cout << "age of the student is : "<<age<<endl;
        cout << "Name of the student is : "<<name<<endl;

    }
};

int main () {

    system("cls");
    Student s1("Gaurav",12);
    Student s2(20 , "Gaurav");
    s1.print();
    s2.print();


   

}