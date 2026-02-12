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
void change (Car c) { // pass by value 
    c.name = "Audi";

}

void changeReference (Car& c) { // pass by Reference 
    c.name = "Audi";

}

int main () {
    Car c1 ;
    c1.name = "honda city";
    c1.seat = 5;
    c1.price = 1200000;
    c1.type =  "cedan";
    
    car(c1);
    change(c1);
    car ( c1);

    cout << endl;

    
    car(c1);
    changeReference(c1);
    car ( c1);

}