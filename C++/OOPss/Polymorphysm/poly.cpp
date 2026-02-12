//  this is operator overloading 
#include<iostream>
using namespace std;

class op {

    public :
    int a;
    
     
     op(int a){
        this-> a = a;
     }
     op operator+ (op b) {
        int sum = this->a*b.a;
        op newEle(sum);
        // cout << newEle << endl;
        return newEle ;
    }
    void display() {
        cout << a << endl;
    }
};
 
int main () {
    op ab(4);
    op cd (5);
    // op ad = ab.ddd(cd) ;
    // cout << ad.a;

    op ad = ab+cd ;
    
    ad.display();
    
}