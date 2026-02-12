// operator overloding 
#include<iostream>
using namespace std;

class Fraction {
    public : 
    int num;
    int dem;

    Fraction(int num , int dem) {
        this->num = num;
        this->dem = dem;
    }
    void display() {
        cout << num  << " / " << dem << endl;
    }

    Fraction add(Fraction f) {
        int newNum = (this->num*f.dem )+ f.num * this->dem;
        int newDem = this -> dem*f.dem;
        Fraction ans (newNum,newDem);
        return ans;

    }
};

int main () {
    Fraction f1 (1,2);
    Fraction f2 (1,3);
    f1.display();
    f2.display();
    Fraction f3 = f1.add(f2);
    f3.display();

}