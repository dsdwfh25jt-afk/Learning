// in build sort function of vectors 

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main() {
    vector < int > vec ;
    vec.push_back(12);
    vec.push_back(123);    
    vec.push_back(124);
    vec.push_back(1342);
    vec.push_back(1);
    vec.push_back(134);
     
    cout << "Printing the vector values : "<<endl;

    for ( int i = 0 ; i < vec.size() ; i++) {
        cout << vec.at(i) << endl;
    }

    cout << "Printing the values after sorting ... "<<endl;
    sort(vec.begin(),vec.end());

    for ( int i = 0 ; i < vec.size() ; i++) {
        cout << vec.at(i) << endl;
    }
}