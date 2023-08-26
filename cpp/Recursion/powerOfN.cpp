#include<iostream>
using namespace std;

    int helper(int base, int p){
        //base condition
        if(p==0) return 1;

        return base*helper(base, p-1);
    }

int main(){

    int base,p;
    cout << "Enter Base and Power: ";
    cin >> base >> p ;

    cout << helper(base, p) << endl;

return 0;
}