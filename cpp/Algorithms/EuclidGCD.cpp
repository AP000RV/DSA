#include<iostream>
using namespace std;

int gcd(int a, int b){
    while(b!=0){
        int rem = a%b;
        a=b;
        b=rem;
    }
    return a;
}


int main(){

    int val1, val2;
    cin >> val1 >> val2;

    cout << gcd(val1,val2);

return 0;
}