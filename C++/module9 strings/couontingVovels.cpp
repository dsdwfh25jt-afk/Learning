#include<iostream>
using namespace std;
int main() {
    string str;
    cout<< "Enter the String : ";
    getline(cin,str);
    int count=0;

    for ( int i=0;str[i]!='\0';i++) {
        if (str[i]=='a' || str[i]== 'e' || str[i]=='i' || str[i]=='o'|| str[i]=='u' || str[i]=='A' || str[i]== 'E' || str[i]=='I' || str[i]=='O'|| str[i]=='U') {
            count++;
        }
    }
    cout << "The Number Of Vovel Present In The String Is : "<<count<<endl;
}