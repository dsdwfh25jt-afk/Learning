// sort the array which have values 0s and 1s 

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main() {
    vector<int> vec = {0,1,0,1,1,1,1,1,0,0,0,1,1,1,0,0,0,0,1,0,1,0,1,1};

    sort(vec.begin() , vec.end());

    for (int i = 0 ; i < vec.size(); i++) {
        cout << vec.at(i)<< " ";
    }
    cout << endl;
}