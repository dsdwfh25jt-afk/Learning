#include<iostream>
using namespace std;
int stair(int n) {
    if (n==2) return 2;
    if (n==1) return 1;

    return stair(n-1) + stair(n-2);
}
int main () {
    cout << "Enter the number of stair of max 2 steps and min 1 step : ";
    int n;
    cin >> n;
    cout << stair(n);
}