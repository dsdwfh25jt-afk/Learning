#include<iostream>
using namespace std;

class car {
    private :
     string name;
     int price;
    public :
    car (string name , int price){
        this->name = name;
        this->price = price;
    }
    void Display() {
        cout << "The Name of The Car is : "<<name<< endl;
        cout << "The Price of The Car is : "<<price<< endl;
    }

};
int main () {

    car c_1 ("Omni" , 500000) ;
    c_1.Display();
    

}