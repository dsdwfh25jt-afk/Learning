#include<iostream> 
using namespace std;
int main() {
    string str = "Gaurav";
    cout << str << endl;
    cout << sizeof(str);


    string str1;
    cout << "Enter your name : ";
    getline(cin,str1); // to take input of string with spaces we use getline function 

    cout << "Your name is : "<< str1<<endl;
    cout << sizeof(str1) <<endl;
    
}