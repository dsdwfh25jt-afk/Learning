// finding size of array with x elements
 
#include<iostream> 
#include<vector>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5,5,67,78,8,9,90,8,6,5,4,3,2,2,2,4,5,7,7,88,8,99,76,54,43,4,6,7,5,6,5,7,5,7,6,754,46} ;
    // we have to use the technic for arrays to find size of array 
    int size = sizeof(arr)/sizeof(arr[1]);
   // int size1 = arr.size(); // this fiunction ony works with vectors 

    cout<<size<<endl;
  //  cout<<size1;

    // printing address of array indices 
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;
    cout<<&arr[5]<<endl;

    cout<<"printing through pointers : "<<endl;
    // printing array indices through pointers 
    int *arrp = &arr[0];
    cout<<arrp<<endl;
    cout<<arrp+1<<endl;
    cout<<arrp+2<<endl;
    cout<<arrp+3<<endl;
    cout<<arrp+4<<endl;
    cout<<arrp+5<<endl;
    cout<<arrp+6<<endl;
    cout<<arrp+7<<endl;
    cout<<arrp+8<<endl;
    cout<<arrp+9<<endl;
    cout<<arrp+10<<endl;
    cout<<arrp+11<<endl;

    // printing the address of first element of the array 
    cout << arr << endl; 
    cout << &arr << endl; 
    cout << arr +1 << endl; // this +1 means go to index of array +1 
    // + 4 bytes 
    // size of element + current address 
    

    

          
}