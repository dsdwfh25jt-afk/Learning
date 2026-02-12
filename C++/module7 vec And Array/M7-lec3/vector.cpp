// vectors in c++ 
#include<iostream>
#include<vector>
using namespace std;
int main() {
    // syntax of vec is : vector <data_type> vec_name;
    vector<int> vec;
    // for adding values in vectors use push_back
    vec.push_back(1);
    // trying to print address 
     cout << &vec[0]<<endl;
    cout << &vec[1]<<endl;
    cout << &vec[2]<<endl;
    cout << &vec[3]<<endl;
    cout << &vec[4]<<endl;
    cout << &vec[5]<<endl;
    cout << &vec[6]<<endl;
    cout << &vec[7]<<endl;

    vec.push_back(2);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(1);
    vec.push_back(2);
    // for assesing or updating use vec[index] 
    cout << vec[0] <<endl;
    cout << vec[1] <<endl;
    cout << vec[2] <<endl;
    cout << vec[3] <<endl;
    cout << vec[4] <<endl;
    cout << vec[5] <<endl;
    cout << vec[6] <<endl;
    cout << vec[7] <<endl;
    // trying to print address of vec 0 1 2 3 4 5 
    cout << &vec[0]<<endl;
    cout << &vec[1]<<endl;
    cout << &vec[2]<<endl;
    cout << &vec[3]<<endl;
    cout << &vec[4]<<endl;
    cout << &vec[5]<<endl;
    cout << &vec[6]<<endl;
    cout << &vec[7]<<endl;

    // vec.size use to check current size of vector
    cout << "Size of vec is " << vec.size()<<endl;
    // vec.capacity is use to check the current capacity of the vector
    cout << "Capacity of vec is " << vec.capacity()<<endl;

    vec.pop_back(); // use to remove elements from the vec 
    cout << "Size of vec is " << vec.size()<<endl;
    cout << "Capacity of vec is " << vec.capacity()<<endl;
    

} 