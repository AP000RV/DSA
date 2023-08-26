/*

---- i/p: -----


        1 2 3
        4 5 6 
        7 8 9


----- o/p:-----
1 2 3 6 9 8 7 4 5

*/



#include<iostream>
using namespace std;

int main(){


cout << "Give Inputs: "<< endl;
    int m,n;
    cin >> m >> n;

    int arr[m][n];

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    int rowStart=0, rowEnd=m-1, colStart=0, colEnd=n-1;


    cout << "Printing Spiral Matrix: " << endl;
    while(rowStart<=rowEnd && colStart<=colEnd){

    // cout << "Debugging: " << endl;
        for(int i=colStart; i<=colEnd; i++){
            cout << arr[rowStart][i] << " ";
        }
        rowStart++;

        for(int i=rowStart; i<=rowEnd; i++){
            cout << arr[i][colEnd] << " ";
        }
        colEnd--;

        for(int i=colEnd; i>=colStart; i--){
            cout << arr[rowEnd][i] << " ";
        }
        rowEnd--;

        for(int i=rowEnd; i>= rowStart; i--){
            cout << arr[i][colStart] << " ";
        }
        colStart++;
        
    }
    cout << endl;

return 0;
}