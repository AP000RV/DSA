#include<iostream>
using namespace std;

int nums(int n){
    if(n==0) return n;
    cout << n << " ";
    nums(n-1);

}

int main(){

    nums(10);
return 0;
}


/*
::::   line number 6,7 ko intercahnge krege to desc,incs order me ans milega  ::::
*/
