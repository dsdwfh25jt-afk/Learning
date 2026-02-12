// get line function

#include <iostream> 
#include <mm3dnow.h>
using namespace std;
void data (string name , int age ) {
    system("cls");
    cout <<"Wellcome " << name << endl;
    cout << "So you are " << age << " years old ...huh!"<<endl;
} 
int main () {
    int age ;
    string name ;
    cout<<"Enter Your Name : ";
    getline (cin,name); // getline function used to get whole line 
    cout<<"Enter you age : ";
    cin>>age;

    data (name , age );
}