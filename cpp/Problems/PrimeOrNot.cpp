#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool solve(int n){
    if(n <= 1)
        cout <<  false;

    for(int i=0; i<n ; i++){
        if(n%i == 0)
         cout <<  false;
    }
cout << true;
}

int main(){

    int n = 7;
    solve(n);
    return 0;
}