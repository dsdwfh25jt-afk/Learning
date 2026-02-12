// take a character from the user and state wheater it is vowel or consonent if not both of them then say not a alphabet 

#include<iostream>
using namespace std;
int main() {
    char character;
    cout<<"Enter a character : ";
    cin >> character ;
    int ascii = int (character);
    if( character >= 97 &&  character <= 122 ||  character >= 65 &&  character <= 90 ) {
        if(character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' ){
            cout<<"Character is Vowel";
        }else {
            cout<<"Character is Consonent ";
        }
    }else{
        cout<<"Not a Alphabet ";
    }
}