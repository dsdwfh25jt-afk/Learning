// print the nCr of ..
#include<iostream>
using namespace std; 

int fact (int num){
    int factorial = 1 ;
    for(int i = 1; i <=num ; i++) {
        factorial *= i;
    }
    return factorial;
}
int main() {
    int num1 ;
    cout<<"Enter the value of num1 : ";
    cin>>num1;
    int num2;
    cout<<"Enter the value of num2 : ";
    cin>>num2;

    int num1Fact = fact(num1);
    int num2Fact = fact(num2);
    int num1_num2Fact = fact(num1-num2);

    int ncr = num1Fact / (num2Fact*num1_num2Fact);
    cout<<ncr<<endl;

}