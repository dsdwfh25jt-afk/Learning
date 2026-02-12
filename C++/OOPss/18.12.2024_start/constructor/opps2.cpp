// defoult constructors 
 #include<iostream>
 using namespace std;
 
 class Student {
    public : 
    string name;
    int age;
    int rollno;


   

    // and this is parameterized constroctor 
    Student(string name, int edge , int rollnumber){
        name = name ;
        age = edge; 
        rollno = rollnumber;

    } 



     // defoult contructor 
    Student() {

    }
 };
 
 int main () {
    Student s ("Gaurav",20,55);
    s.name = "GB";
    cout <<s.name << " " << s.age << " " << s.rollno << endl;
 }