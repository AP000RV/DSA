#include<iostream>
using namespace std;

int recursiveSum(int n){

    if(n==0) return 0;
    int tempSum = recursiveSum(n-1);
    return n + tempSum; 
}

int main(){

    int n;
    cin >> n;

    cout << recursiveSum(n) << endl;

return 0;
}       