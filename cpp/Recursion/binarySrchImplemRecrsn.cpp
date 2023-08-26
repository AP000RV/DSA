#include<iostream>

using namespace std;

void print(int arr[], int start, int end){

    for(int i=start; i<=end; i++)
        cout<< arr[i] << " ";
    cout<< endl;
}


bool binarySearch(int arr[], int start, int end, int key){

    cout<< endl << endl;
    print(arr, start, end);


    // Base case
    if(start>end)
        return false;

    int mid = start + (end-start)/2;
    cout << "value of mid is: " << arr[mid]  << " and index is: " << mid << endl;

    if(arr[mid] == key)
        return true;

    if(arr[mid] < key)
        return binarySearch(arr, mid+1, end, key);

    else
        return binarySearch(arr, start, mid-1, key);

}


int main(){

    int arr[6] = {2,4,6,10,14,18}; 
    int size = 6, key = 1, start = 0, end = 5;

    cout << "Present or Not " << binarySearch(arr, start, end, key) << endl << endl;
    
    return 0;
}