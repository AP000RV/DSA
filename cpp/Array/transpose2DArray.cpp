/*
Transpose : converts the row into cols and cols into rows....


// ---- approach ----
sirf upper part ko swap krege:::: yadi sbko kr diya to as it is return ho jayega...
2nd loop me j ko i se initialize krege so that hme j hmesha i se bada rhe 


----- Intuition ------
a[i][j] ko temp me store kro
swap kro
[j][i] ko temp ki value dedo
khtm....

*/


#include<iostream>
using namespace std;

int main(){

    int n=3;
    int a[n][n] = {{1,2,3}, {4,5,6}, {7,8,9}};

    // swapping upper half of matrix...
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }


    // printing the matrix

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

return 0;
}





// // // ---------- i/p -------------

// 1 2 3
// 4 5 6
// 7 8 9

// // // ---------- o/p -------------


// 1 4 7 
// 2 5 8
// 3 6 9