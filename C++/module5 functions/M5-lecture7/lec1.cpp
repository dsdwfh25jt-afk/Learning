// formal parameters and actual parameters 

#include<iostream>
using namespace std;
int call ( int x , int y) { // the paramets in this fucntion are called formal parameters  because these are the copy of actual parameters or real integer values 
    cout<<&x<<endl;
    cout<<&y<<endl;
    
}
int main() {
    int x , y ;
    cout<<&x<<endl;
    cout<<&y<<endl;
    call(x,y); // the parameter in this line x and y are called actual parameters 

}