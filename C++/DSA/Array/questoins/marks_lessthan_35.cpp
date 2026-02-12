// if the marks of the student in the array is less than 35 then print its roll no. ( here roll no. refers to the index of the array ) 

#include<iostream>
using namespace std;
int main() {
    int numOfStudents;
    cout << "Enter Number Of Students : ";
    cin >> numOfStudents;

    int arr[numOfStudents];

    // taking marks as input 
    for( int i = 0 ; i < numOfStudents ; i++) {
        cout<<"Enter the marks for roll number "<<i+1<<" : ";
        cin>>arr[i];
    }
    // printing index of less than 35

    cout << "Roll number of students which has < 35 marks : "<<endl;
    for( int i = 0 ; i < numOfStudents ; i++) {

        if (arr[i] < 35) cout << i+1<<endl;
    }
} 