#include<iostream>

using namespace std;

void insertionSort(int arr[], int size, int index){
    
    if(index==size)
    return;
    
    int curr = arr[index];
    int i = index-1;

    while(i >= 0){
        if(curr < arr[i])
            arr[i+1] = arr[i--];
        else 
            break;
    }
    arr[i+1] = curr;

    insertionSort(arr, size, index+1);

}


int main(){

    int arr[5] = {43,44,54,23,12};
    int size = 5;

    insertionSort(arr, size, 1);

    cout<< "Array after insertion sort: ";
    for(int i=0;i<size;i++){
        cout<< arr[i] << " ";
    }

    return 0;
}