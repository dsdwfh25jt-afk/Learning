#include<iostream>
using namespace std;

class Car {
public: 
    string name ;
    int seat;
    int price ;
    string type;

};

void car( Car c) {
    cout << "Name : " << c.name << endl;
    cout << "Seats : " << c.seat << endl;
    cout << "Price : " << c.price << endl;
    cout << "Type : " << c.type << endl;
    cout << endl;
    
}
int main () {
    Car c1 ;
    c1.name = "honda city";
    c1.seat = 5;
    c1.price = 1200000;
    c1.type =  "cedan";
    
    Car c2;
    c2.name = "Fortuner";
    c2.seat = 8;
    c2.price = 5500000;
    c2.type =  "SUV";
    
    Car c3;
    c3.name = "maruti";
    c3.seat = 5;
    c3.price = 700000;
    c3.type =  "Hetchback";

    car(c1);
    car(c2);
    car(c3);

}