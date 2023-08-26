#include<iostream>
using namespace std;

int binarySearch(int arr[] , int size, int key){
    int start = 0;
    int end = size-1;

    int mid = (start+end)/2;

    while (start <= end){
        
        if(arr[mid] == key)    return mid; 
        if (key > arr[mid])    start = mid+1;
        else                   end = mid-1;

        mid = (start+end)/2;
    }

    return -1;
}


int main()
{
    int even[6] = {2,3,4,65,68,100};
    int odd[5] = {1,2,3,4,5};

    int evenIndex = binarySearch(even, 6, 68);
    cout<< "index of 68 is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 1);
    cout<< "index of 1 is " << oddIndex << endl;
}