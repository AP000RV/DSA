#include<iostream>

using namespace std;

void selectionSort(int arr[], int size, int index){

    if(size==index)
    return;

    int minIndex = index;

    for(int i=index+1;i<size;i++){
        if(arr[minIndex] > arr[i])
        {
            minIndex = i;
        }
    swap(arr[minIndex], arr[index]);    
    }

    selectionSort(arr,size, index+1);
} 

int main(){

    int arr[5] = {32,54,23,63,12};
    int size = 5;
    int index = 0;
    selectionSort(arr, size, index);

    cout<< "Array after selection sort: ";
    for(int i=0;i<size;i++){
        cout<< arr[i] << " ";
    }

    return 0;
}