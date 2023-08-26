#include<iostream>
#include<math.h>

using namespace std;


// bool solve(int num){

//     for(int i=0; i<30; i++){
//         int a = pow(2,i);
//         if(a == num)    return true;
//         else            return false;
//     }

// }


int main(){
    // solve(4);
    int num = 4;

    for(int i=0; i<30; i++){
        int a = pow(2,i);
        if(a == num)    return true;
        else            return false;
    }

    return 0;
}