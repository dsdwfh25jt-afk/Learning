// write a program to calculate sum of 2 number using pointer / dereffrence operator 
 
 #include<iostream>
 using namespace std;
 int main() {
    int num1 = 12 ;
    int num2 = 23 ;

    // the following declaration will throw error because we can not declare the name of data type like that also 
    // int *num1 = &num1 , *num2 = &num2 ; 

    int *addNum0 = &num1 , *addNum = &num2 ;

   
    int * addNum1 = &num1;
    int * addNum2 = &num2;
    cout << "Enter the value of num1 : ";
    cin >> *addNum1 ;
    cout << "Enter the value of num2 : ";
    cin >> *addNum2;
    int sum = *addNum1 + *addNum2 ;
    cout << sum <<endl;

    int *addSum = &sum;
    int **addAddSum = &addSum;
    cout<<addAddSum<<endl;
    cout<<*addAddSum<<endl;
    cout<<**addAddSum<<endl;


    // *int  a  ;
    // cout<<a<<endl<<b<<endl;
 }