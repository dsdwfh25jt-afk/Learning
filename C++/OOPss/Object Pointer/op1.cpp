#include<iostream>
using namespace std;

class Student {
    public :

    string name;
    int age;

    Student(string name, int age) {
        this->name = name;
        this->age = age;
    } 

    void print () {
        cout << age << endl;
        cout << name << endl;
    }
};


int main() {
    Student s("Gaurav Bhat", 22);

    // int *a = new int (12); 
    // cout << *a << endl; 

    // the upper statement is storing a data with no variable name 
    // by storing the variable address in the name called 'á' and on that 
    // address the actual data is stored 

    Student *S1 = new Student ("Gaurav",20);

// Correct ways to access this Dynamic Objects 
    cout <<(*S1).age<<endl;
    cout <<(*S1).name<< endl;
    // and 
    cout << S1->age<<endl;
    cout << S1->name<<endl;

// Wrong ways to access this Dynamic Objects
    // i have commented this to not get any trouble to run the code 
   
    // cout <<*S1.age<<endl;
    // cout <<*S1.name<< endl;
    // // and 
    // cout <<S1.age<<endl;
    // cout <<S1.name<< endl;

// Using the class fucntion 

    S1->print();

// Note / Tip 
// always use arrow to access Dynamic Objects 

Student* newStudent = &s;

newStudent->age = 40 ;
cout << newStudent->age;





}