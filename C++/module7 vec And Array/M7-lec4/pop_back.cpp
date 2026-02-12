// pop back in vectors  
#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> vec(5);
    // we can declare size at the tme of initialization of vec like that 

    // we use vec. at () function to access the persticlular element of the vec
    // like this 
    cout << "Size of vec after declaring size : "<< vec.size()<<endl;
    cout << "Capacity of vec after declaring size : "<< vec.capacity()<<endl;
    vec.at(0) = 10;
    vec.at(1) = 11;
    vec.at(2) = 12;
    vec.at(3) = 13;
    vec.at(4) = 14;

    cout << "Size of vec after adding data in blocks : "<< vec.size()<<endl;
    cout << "Capacity of vec after adding data in blocks : "<< vec.capacity()<<endl;

    for ( int i = 0 ; i < vec.size(); i++){
        cout<< vec.at(i) << endl;
    }

    vec.pop_back();
    vec.pop_back();
    cout << "After using pop back "<<endl;
    for ( int i = 0 ; i < vec.size(); i++) {
        cout << vec.at(i)<<endl;
    }  

    cout << "Size of vec after pop_back elements  : "<< vec.size()<<endl;
    cout << "Capacity of vec after pop back elements : "<< vec.capacity()<<endl;
    
    cout << "Trying to print all the elements of vec that we intialized : "<<endl;

        cout << vec.at(0) << endl;
        cout << vec.at(1) << endl;
        cout << vec.at(2) << endl;

        // these following 2 line will throuw error called index out of bond 
        // cout << vec.at(3) << endl;
        // cout << vec.at(4) << endl;


cout << "So at the end after using pop back the size will reduce but the capacity will Not !"<<endl;
} 