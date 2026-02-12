#include<iostream>
using namespace std;
    
class Vector { 
    public : 
    int size;  // int size = 1 ; it is invalid 
    int capacity;
    int* arr ;

    Vector() {
        size = 0;
        capacity = 1;
        arr = new int[1];
    }
    void add(int ele) {
        if (arr[size] == capacity) {
            capacity = capacity*2;
            int* arr2 = new int [capacity];
            for ( int i=0; i<size; i++) {
                arr2[i] = arr[i];
            }
            arr = arr2;
        }
        arr[size++] = ele;
    }
    void print() {
        for ( int i=0; i<size; i++) {
            cout << arr[i] << " " ;
        }
        cout << endl;
    }
    void Size() {
        cout << this->size << endl; ;

    }
    void cap() {
        cout << this->capacity << endl;
        
    }
    void get (int ind) {
        if (ind == 0) {
            cout << "List is Enmpty..." <<endl;
            return;
        }
        if (ind > size || ind < 0) {
            cout << "Please Enter valid Index ..." <<endl;
            return;
        }
        cout << arr[ind-1] << endl;
    } 
    void remove () {
        size--;
    }
};

int main () {
    Vector v ;

    v.Size();
    v.cap();

    v.add(10);
    v.add(11);
    v.add(12);

    v.Size();
    v.cap();

    v.get(0);
    v.remove();
    

}