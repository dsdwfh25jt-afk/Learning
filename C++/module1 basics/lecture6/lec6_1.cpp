#include <iostream>
using namespace std;
int main() {
    // calculating simple interest 
    // formula = PRT / 100  = principle * rate of interest * time / 100 


    float principle = 20000 ;
    float time = 1 ;
    float rate = 7.5 ;

    float simpleInterest = ( principle * time * rate )  / 100 ;

    cout << simpleInterest <<endl;
        
}