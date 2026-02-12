
#include<iostream>
using namespace std;
void digi( int num1 ,int &fDigit , int &lDigit ) {
    lDigit = num1 % 10 ;
    fDigit = num1 ;
    while (num1 >= 10 ) {
        fDigit = num1 / 10 ;
        num1 /= 10 ;
    }

}
int main() {
    int num1;
    int fdigit ;
    int ldigit ;

    cout<<"Enter Number : ";
    cin>>num1;
    digi(num1 , fdigit , ldigit);
    cout << " first digit of number : "<<fdigit<<endl;
    cout << " last digit of number : "<<ldigit<<endl;
}