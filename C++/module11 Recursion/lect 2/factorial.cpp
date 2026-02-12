// print the factoial of n number by using the recursive fucntion
#include<iostream>
using namespace std;

int factorial (int n) {
    if (n==0) return 1;

    int fact = n*factorial(n-1);
    cout << fact << endl;
    cout << endl;
    return fact;
}
int main () {
    int number;
    cout << "Enter the number : ";
    cin >> number ;
    cout << factorial(number);
}