// swap function using pointers

#include<iostream>
using namespace std;
void swap(int *num1 , int *num2) {
    int temp = *num1 ;
    *num1 = *num2 ;
    *num2 = temp ;

}
int main() {
    int num1 = 5 ;
    int num2 = 10 ;
    cout<<"Before Swap  ..."<<endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout<<"After Swap ..."<<endl;
    swap(&num1 , &num2);
    cout << num1 << endl;
    cout << num2 << endl;
}