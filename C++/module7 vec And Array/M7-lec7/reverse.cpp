// reverse the part of the array 
#include<iostream>
#include<vector>


using namespace std;
int main() {
    vector <int> vec = {1,2,3,4,5,6,7,8,9};
int i = 4; // starting index of the array 
int j = 8; // ending index of the array 
   while (i <= j)
   {
    int temp = vec.at(i);
    vec.at(i)=vec.at(j);
    vec.at(j) = temp;
    i++;
    j--;
   }

   for ( int i = 0 ; i < vec.size(); i++) cout<<vec.at(i)<< " ";


// added newly 
// reversing second part of the array  
 int a = 0; // starting index of the array 
 int b = 3; // ending index of the array 
   while (a <= b)
   {
    swap(vec.at(a), vec.at(b));
    a++;
    b--;
   }

// reversing comple array 
   int k = 0 ;
   int l = vec.size();
   while (k <= 1-l/2)
   {
    swap(vec.at(k), vec.at(k-l-1));
    k++;
    l--;
   }

   cout<<endl;
   for ( int i = 0 ; i < vec.size(); i++) cout<<vec.at(i)<< " ";



}