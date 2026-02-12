// print all the upercase alphabets with ascii values 

#include<iostream>
using namespace std;
int main() {
    int character = 65 ;
    while (character <= 90) {
        cout<<"The Alphabet is "<<(char) character<<" And the ASCII value is "<<character<<endl;
        character++;
    }
}