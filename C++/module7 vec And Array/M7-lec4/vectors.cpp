#include<iostream>
#include<vector>

using namespace std;
int main() {
    int array [] =  { 1,2,3,4,5};
    vector<int> vec (10); 

    cout << "Printing the vec elements before assingning the values !"<<endl;

    for ( int i = 0 ; i < 10 ; i++) {
        cout << vec[i]<<endl;
    }

    cout << "Printing the vec elements after assingning the values !"<<endl;

    for ( int i = 0 ; i < 10 ; i++) {
        vec[i] = i+1 ; 
    }

    
    for ( int i = 0 ; i < 10 ; i++) {
        cout << vec[i]<<endl;
    }


    cout<<"The size of vec is "<<vec.size()<<endl;
    cout<<"The capacity of vec is "<<vec.capacity()<<endl;
    vec.push_back(1);
    cout<<"The size of vec is "<<vec.size()<<endl;
    cout<<"The capacity of vec is "<<vec.capacity()<<endl;
    vec.at(1) = 21 ;
    cout << vec.at(1) <<endl;

    // we can't access the elements which are on index size or size+ from the vec.at(); function
    // cout << vec.at(11) <<endl;
    // cout << vec.at(21) <<endl;
}

