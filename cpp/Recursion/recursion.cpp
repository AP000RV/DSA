#include <iostream>

using namespace std;

int factorial(int n){

    if(n==0)
        return 1;
    
    return n*factorial(n-1);

}

int powOfTwo(int n){

    if(n==0)
        return 1;

    return 2*powOfTwo(n-1);

}

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>> n;

    int ans = factorial(n);
    cout<< "factorial of " << n << " is " << ans << endl;

    int ans1 = powOfTwo(n);
    cout<< "Power of 2^" << n << " is " << ans1 << endl;


    return 0;
}