#include<iostream>
using namespace std;

class Cricketer {
    public:

    string name;
    int runs;
    float avg;

    Cricketer(string name , int runs , float avg) {
         this->name = name;
         this->runs = runs;
         this->avg = avg;
    }
};
int main () {
    // creating dynamic array 
    int* ptr = new int [20];     
    // creating the object pointer of Cricketer 
    Cricketer *batsman = new Cricketer("Rohit", 24976 , 47.78);
    cout << batsman->name << endl;
    cout << batsman->runs << endl;
    cout << batsman->avg << endl;

}
