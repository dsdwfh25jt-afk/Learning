#include<iostream>
using namespace std;
class Student{
    public :

    string name ;
    int age;
    int marks ;

    Student (string name , int age , int marks) {
        this->name = name;
        this->age  = age ;
        this->marks = marks;

    }

    int ageAndMarks(){
        
    //    cout << " The age : "<<age<<endl;
    //    cout << "The marks : "<<marks<<endl;
       return age+marks;


    }

};

int main() {
    Student Se("Gaurav",20,55);
    cout << Se.ageAndMarks();

}
