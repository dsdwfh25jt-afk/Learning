#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> vec1 ;
    vector<int> vec2 ;
    vec1.push_back(1);
    vec1.push_back(4);
    vec1.push_back(6);
    vec1.push_back(4);
    vec1.push_back(8);
    vec1.push_back(9);
    vec2.push_back(2);
    vec2.push_back(3);
    vec2.push_back(5);
    vec2.push_back(7);
    vec2.push_back(11);
    
    
    int v1 = 0 ;
    int v2 = 0 ;
    int v1size = vec1.size();
    int v2size = vec2.size();
    int size = (v1size+v2size);

    vector<int> vec3;


    for ( int i = 0 ; i < size; i ++) {
        if (vec1[v1] > vec2[v2]) {
            int tmp = vec2[v2] ;
            vec3.push_back(tmp);  
            v2++;

        }else {
            int temp = vec1[v1] ;
            vec3.push_back(temp); 
            v1++;
        }
    }

    for ( int i = 0 ; i < vec3.size(); i++) {
        cout << vec3.at(i)<< " " ;
    }
}