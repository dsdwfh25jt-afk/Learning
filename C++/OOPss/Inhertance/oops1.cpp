#include<iostream>
using namespace std;

class furniture {
    public :
    int chair;
    int table;
    
};
class homeApliances : public furniture {
    public :
    int cot ;
    int tv;
    int speacker;

    homeApliances() {

    }
    homeApliances ( int chair, int table , int cot , int tv , int speacker) {
        this->chair = chair;
        this-> table = table;
        this-> cot = cot;
        this->tv = tv ;
        this-> speacker = speacker;

    }

    void display(void) {
        cout << "Number of chair : " << chair << endl;
        cout << "Number of table : " << table << endl;
        cout << "Number of cot : " << cot << endl;
        cout << "Number of tv : " << tv << endl;
        cout << "Number of speacker : " << speacker << endl;
    }
};

int main () {
    homeApliances home1 ;
    home1.chair = 12 ;
    home1.table = 2;
    home1.cot = 2;
    home1.speacker = 3;
    home1.tv = 2;


    homeApliances home2 (16 , 3 ,2 ,3, 5);

    home1.display();
    home2.display();


    
}