// stroting marks of students with roll number of the students 
#include<iostream>
using namespace std;
int main() {
    int student;
    int array [2][4] ;
    // cout << "Enter the number of students : ";
    // cin >> student ;
    
        for (int i = 0 ; i < 2 ; i++) {
            if (i == 0) cout<<"Enter the roll no. "<<endl;
            if (i == 1) cout<<"Enter the marks  "<<endl; 
            for ( int j = 0 ; j < 4 ; j++) {
                cin >> array[i][j];
            }
        }

        
        for (int i = 0 ; i < 2 ; i++) {
            for ( int j = 0 ; j < 4 ; j++) {
                cout <<  array[i][j] << " ";
            }
            cout << endl;
        }
}