// pointer arethmatic 

#include<iostream>
using namespace std;
int main() {
    int num1 = 12 ;
    int *num2 = &num1 ;
    cout<<*num2<<endl;


    // increamenting the value of num1 from the address
    (*num2)++; // always use ((*num2)++) this to increament the number from addresses or pointers so there will be no error will generate 
    cout << " Increamenting the value of num1 from num2 "<<endl;
    cout<<*num2<<endl;


    num2 = num2+2;
    cout<<*num2<<endl;
    cout<<num2<<endl;

    num2++ ;
    cout<<num2<<endl;

    // imp 
    // the dependence of pointer increament of the data type of pointer 
    


    



    
}