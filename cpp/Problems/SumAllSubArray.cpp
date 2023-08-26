#include <iostream>
using namespace std;

int main()
{
    cout << "Enter no of elements ";
    int n;
    cin >> n;
    int arr[n];

    cout << "Enter Elements: ";
    for(int i=0;i<n; i++){
        cin >> arr[i]; 
    }
    
    int currSum = 0;
    int totalSum=0;

    for(int i=0; i<n; i++){
        currSum = 0;
        for(int j=i; j<n; j++){
            currSum += arr[j];
            totalSum += currSum;
            cout << " " << currSum << " ";
        }
        cout << endl;
    }

    cout << "Total sum of all subArrays is: " << totalSum << endl;

    return 0;
}