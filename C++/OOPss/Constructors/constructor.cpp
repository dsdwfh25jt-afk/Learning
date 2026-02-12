#include<iostream>
using namespace std;

class Car {
public: 
    string name ;
    int seat;
    int price ;
    string type;


// thats called constructor which do some kind of task for us like function 
     Car(string j , int s , int p , string t) {
        name = j;
        seat = s ;
        price = p;
        type = t;

    }

};

void car(   Car c) {
    cout << "Name : " << c.name << endl;
    cout << "Seats : " << c.seat << endl;
    cout << "Price : " << c.price << endl;
    cout << "Type : " << c.type << endl;
    cout << endl;
    
}
int main () {
    Car c1("honda city",5,1200000, "sedan");
    // Sinmple way to Initialize 
    // c1.name = "honda city";
    // c1.seat = 5;
    // c1.price = 1200000;
    // c1.type =  "cedan";
    
    Car c2("Fortuner",8,5500000,"SUV");
    // Sinmple way to Initialize 
    // c2.name = "Fortuner";
    // c2.seat = 8;
    // c2.price = 5500000;
    // c2.type =  "SUV";
    
    Car c3("maruti suzuki",5,700000, "Hetchback");
    // Sinmple way to Initialize 
    // c3.name = "maruti";
    // c3.seat = 5;
    // c3.price = 700000;
    // c3.type =  "Hetchback";

    car(c1);
    car(c2);
    car(c3);

}