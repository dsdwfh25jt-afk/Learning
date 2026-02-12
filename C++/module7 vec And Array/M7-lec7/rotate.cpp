// rotate the aray by n number of times 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotateVec(vector<int>& vect , int start , int end ){
    int i = start;
    int j =  end;
    while (i <= j ) {
        int temp = vect.at(i);
        vect.at(i) = vect.at(j);
        vect.at(j) = temp ;
        i++;
        j--;
    }
}
int main() {
    int rotate ;
    cout << " Enter the number of rotations : ";
    cin >> rotate ;

    vector<int> vec = {1,2,3,4,5,6,7,8,9};  
    int rotated =  rotate % vec.size()-1;

    for (int i = 0 ; i < vec.size() ; i++ ) cout << vec.at(i) << " ";   
    cout << endl;

    rotateVec(vec,vec.size()-1 - rotated , vec.size()-1 );
    rotateVec(vec,0, vec.size()-2 - rotated );
    rotateVec(vec,0, vec.size()-1);

    for (int i = 0 ; i < vec.size() ; i++ ) cout << vec.at(i) << " ";
   


}