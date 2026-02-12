// constructors 

#include<iostream> 
using namespace std;

class Student{
    public : 
    string name;
    int age;

    // constructor 
    Student(string s , int a){
        name = s ;
        age = a;
    } 
};
int main () {
    Student s("Gaurav",20);
    cout << s.age << s.name <<endl;
}