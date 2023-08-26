#include<iostream>
using namespace std;

bool isPowerOfTwo(int n){
    return (n && !(n & n-1));          // ! isliye bcuz n,n-1 ka and 0 aaye to wo condition true hogi means if ans is 1 then is false and ans is 0 then it is true....
}

int main(){
    cout << isPowerOfTwo(16) << endl;
    cout << isPowerOfTwo(9) << endl;
return 0;
}


/*
DRY RUN

 n = 8     1000
 n-1=7     0111

 dono ka "AND" krege to result always 0 hi milega....
 and edge case yadi 0 hua to uske liye result ko n/0 se "AND" krdege

*/