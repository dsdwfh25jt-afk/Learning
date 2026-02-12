#include<iostream>
using namespace std;
class student {
public:

    string name;
    int rollNo;
    float cgpa;
};
int main () {
    student x ;

    x.name = "Gaurav Bhat";
    x.rollNo = 55;
    x.cgpa = 3.6;


    student x1 ;

    x1.name = "Taniqsh Ingle";
    x1.rollNo = 50;
    x1.cgpa = 5.6;

    cout << "Enter the name of the student ";
    cin >> x1.name;
    cout << "Enter roll no. of the student";
    cin >> x1.rollNo ;
    cout << "Enter the cgpa of the student ";
    cin >> x1.cgpa;
    


    cout << x.name << " " << x.rollNo << " " << x.cgpa << endl;
    cout << x1.name << " " << x1.rollNo << " " << x1.cgpa << endl;
    

}