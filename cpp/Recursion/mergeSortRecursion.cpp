#include<iostream>

using namespace std;

void merge(int* arr, int s, int e){

    int mid = s+(e-s)/2;

    int len1 = mid-s+1;
    int len2 = e - mid;

    int* first = new int[len1];
    int* second = new int[len2];

    // copying values

    int mainIndexArray = s;

    for(int i=0;i<len1;i++){
        first[i] = arr[mainIndexArray++];
    }
    
    mainIndexArray = mid+1;

    for(int i=0;i<len2;i++){
        second[i] = arr[mainIndexArray++];
    }

    // merging two sorted arrays
    int index1= 0;
    int index2= 0;
    mainIndexArray = s;

    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2])
            arr[mainIndexArray++] = first[index1++];
        else
            arr[mainIndexArray++] = second[index2++];
    }

    while(index1 < len1){
        arr[mainIndexArray++] = first[index1++];
    }

    while(index2 < len2){
        arr[mainIndexArray++] = second[index2++];
    }

    delete []first;
    delete []second;

}



void mergeSort(int* arr, int s, int e){
    // base case
    if(s>=e)
        return;

    int mid = s+(e-s)/2;

    // left part sort
    mergeSort(arr, s, mid);

    // right part sort
    mergeSort(arr, mid+1, e);

    // merge 2 sorted arrays...
    merge(arr, s, e);

}


int main(){

    int arr[15] = {23,42,45,23,54,76,1,0,3,-1,12,43,90,67,56};
    int n=15;
    
    mergeSort(arr, 0 ,n-1);

    cout<< "After Merge Sort: ";
    for(int i=0; i<n;i++){
        cout<< arr[i] << " ";
    }

    return 0;
}