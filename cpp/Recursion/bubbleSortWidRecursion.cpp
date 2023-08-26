#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size){

    // base case
    if(size == 0 || size == 1)
    return ;

    // processing
    for(int i=0;i<size-1;i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    // recursive call
    bubbleSort(arr, size-1);
}


int main(){
    int arr[5] = {2,4,5,1,3};
    int size=5;

    bubbleSort(arr, size);

    cout << "After sorting: " ;
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}