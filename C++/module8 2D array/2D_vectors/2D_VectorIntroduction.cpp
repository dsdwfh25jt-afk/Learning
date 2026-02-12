#include<iostream>
#include<vector>
using namespace std;
int main() {
    // 2D vectors are vector of vectors 

    // advantages of 2D vectors 
    // 1) we can increase rows dynamically 
    // 2) We can increase coloumns dynamically 
    // 3) We can use variable coloumns 


    vector< vector<int> > vec;
    
    vector<int> vec1;
    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(3);

    vector<int> vec2;
    vec2.push_back(4);
    vec2.push_back(5);

    vector<int> vec3;
    vec3.push_back(6);
    vec3.push_back(7);
    vec3.push_back(8);
    vec3.push_back(9);
    vec3.push_back(10);

    cout << vec3[4] << endl; // out of range it will produce garbage value

    // we can push only vector in 2D vector becuase the data type of that vector is 
    // vectot 
    // for example 

    vec.push_back(vec1);''
    // this is completly valid 
    vec.push_back(vec2);
    vec.push_back(vec3);
    // thats how we can enter dynamic values of coloums in 2D vectors 
    
    // and we can access 2D vecrtor elemets like as follow 
    cout << vec[1][1]<< endl; 
    //  cout << vec[0]; We can't print or access entire vector from like this .. this will throw error
       

}
