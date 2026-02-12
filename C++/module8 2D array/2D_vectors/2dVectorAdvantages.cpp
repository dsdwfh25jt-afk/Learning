#include<iostream>
#include<vector>
using namespace std;
void Arr(int arr[2][2]){ // it is necessary in array to give size of array while using in another function 

    cout << arr[0][0];
}
void vec(vector<vector<int>> &vect){ // we have to get address other wise it will create new vector insider this function 
    cout << " Inside the vec Function : "<< vect[0][0] << endl;
    vect[0][0] = 100;
      cout << " Inside the vec Function After change : "<< vect[0][0] << endl;
}
int main() {
    // easy to pass in function campare to array 
    int arr[2][2]= {1,2,3,4};
    Arr(arr);

    vector < vector <int> > v;
    vector < int > v1;
    v1.push_back (1);
    v1.push_back (2);
    v.push_back(v1);

    vector < int > v2;
    v2.push_back (3);
    v2.push_back (4);
    v.push_back(v2);
    cout<< " Before passing in the vec function : " << v[0][0] << endl;
    vec(v);
    cout<< " After passing in the vec Function : " <<  v[0][0] << endl;
    

    // at the end we have to metion in another fucntion with row and col size other wise it will wont work 

    // but in vector row and col size not neccessary in another function 
    
    // so that is the big advantage in vector \
    
}