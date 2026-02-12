// Write a function that takes the radius of a circle as an argument and returns its area.

#include<iostream>
using namespace std;
const float pi = 3.14159 ;
double area (int radius ) {
    return pi*(radius*radius);
} 
int main() {
    int radius ;
    cout<<"Enter the radius of a circle : ";
    cin>>radius;
    cout << "Area of a circle is : "<<area(radius);
}