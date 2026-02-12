// ìf cost price and selling price of an item is input through the keyboard 
// write a program to determine wheather the seller has made profit or inccured lose 
// Also determine how much profit does he incucred or loss he ìnccured 

#include<iostream>
using namespace std;
int main() {
    int costPrice;
    int sellingPrice;
    int result;

    cout<<"Enter the cost Price : "<<endl;
    cin>>costPrice;
    cout<<"Enter the selling price : ";
    cin>>sellingPrice;

    result = sellingPrice - costPrice ;

    if (result < 0 ) {
        cout<<"the seller inccured loss of : "<<result ;
    }else {
        cout<<"the seller inccured profit of : "<<result ;
    }


}