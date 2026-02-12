#include<iostream>
using namespace std;
class Employee {
    private : 
    int age; // private variables cant be directly access from the main fucntion
    int salary; // for that we have to create function in the class which can call in main function 
    public :  
    int workTime; 
    string name; // these data types can be access in any function in the code or program by using . (DOT) operator 
    
    int data(int age,int salary);// have to mention the return type of the function 
    void print() {
        cout << " The age of the Employee : " << age << endl;
        cout << " The salary of the Employee : " << salary << endl;
        cout << " The work time of the Employee  : " << workTime << endl;
        cout << " The name of the Employee : " << name << endl;
    }
};
// we can create the fucntion of class outside the class by using name of the class and double colons 
Employee::data(int age,int salary) { 
    this->age = age;
    this->salary = salary;
} 
int main () {
    Employee Engineer; // we have created a Engineer 
    Engineer.name = "Gaurav Bhat"; // fiding date by using . Dot operator 
    Engineer.workTime = 8;  
    Engineer.data(20,12000); // calling the class fucntion for fiding data 
    Engineer.print(); // calling class fucntion to print the data of Engineer 
}