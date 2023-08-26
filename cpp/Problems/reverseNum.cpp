#include<iostream>
using namespace std;

int ans = 0;
int reverseNum(int num){
    while(num>0){
        int digit = num%10;
        ans = (ans*10) + digit;
        num = num/10;

        // return ans;
    }
        cout << "Reverse Number is : " << ans;
}

int main(){
    int num = 501122;
    return reverseNum(num);
}