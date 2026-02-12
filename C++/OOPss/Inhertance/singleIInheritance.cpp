#include<iostream>
using namespace std;

class Vehicle {
    public : 
    int topSpeed;
    int mileage;
    int fuel;
    int gears;
};

class Car : public Vehicle {
    public : 
    int seat;
    bool sunroof;
};

class Bike : public Vehicle {
    public : 
    int seat;
    int wheels;

    void setData(void) {
        cout << "Enter the Topspeed : ";
        cin >> topSpeed ;
        cout << "Enter the Mileage : ";
        cin >> mileage ;
        cout << "Enter the Fuel : ";
        cin >> fuel ;
        cout << "Enter the Gears : ";
        cin >> gears ;
        cout << "Enter the Seat : ";
        cin >> seat ;
        cout << "Enter the Wheels : ";
        cin >> wheels ;
    }
    void display (void) {
        cout << "The topspeed is : " << topSpeed << endl;
        cout << "The Mileage is : " << mileage << endl;
        cout << "The Fuel capacity is : " << fuel << endl;
        cout << "The Gears are : " << gears << endl;
        cout << "The Seats are : " << seat << endl;
        cout << "The Wheels are : " << wheels << endl;

    }

};
int main () {

    Bike Hero;
    Hero.setData();
    Hero.display();
}