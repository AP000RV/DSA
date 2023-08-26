#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {34, 1, 13, 76, 35};
    cout << "Given array is: " << endl;
    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i] << " ";
    }

    // applying bubble sorting...
    cout << endl;
    int n = 5;
    cout << "Array after sorting: " << endl;

    for(int i=1; i<n; i++){
        int current =arr[i];
        int j =i-1;

        while(arr[j]>current && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;

    }

    // cout << "printing the array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}