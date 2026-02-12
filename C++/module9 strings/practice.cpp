#include<iostream>
using namespace std;
int main() {
    string str = "Gaurav"; // we can declare like this 
    cout << "Size of string is : "<< str.size()<<endl;
    cout << "Enter the string : ";
    getline(cin,str);
    cout << "You have inserted : "<<str<<endl;

    for ( int i= 0; str[i]!='\0'; i++) {
       cout << str[i];
    }
      cout << "Size of string is : "<< str.size()<<endl;
    //   cout << str.size(); // to find the size of the string 


}