#include<iostream>
using namespace std;

class Car{ 
    public : 
    string name;
    int price;
    int seats;
    string type;

};

void print(Car &c) {  // when we use & it will change to passed by reference 
// otherwise it is passed by value 

    cout << "Name of the car is : "<<c.name<<endl;
    cout << "Price of the car is : "<<c.price << endl;
    cout << "Seat capacity of the car is : "<<c.seats << endl;
    cout << "Type of the car is : "<<c.type<< endl;
    cout << endl; 
}


int main () { 

    Car toyota ;
    toyota.name = "TOYOTA FORTUNER";
    toyota.price = 6100000 ;
    toyota.seats = 6 ;
    toyota.type = "SUV";

    Car kia ;
    kia.name = "KIA SONET";
    kia.price = 610000 ;
    kia.seats = 4 ;
    kia.type = "SEADAN";
    
    Car maruti ;
    maruti.name = "MARUTI SUZUKI";
    maruti.price = 1100000 ;
    maruti.seats = 6 ;
    maruti.type = "SUV";
    
    print(kia); // it is passed by value 
    print(maruti);
    print(toyota); 
    
    

}