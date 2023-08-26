#include<iostream>

using namespace std;

bool linearSearch(int arr[], int size, int key){

    if(size == 0)
        return false;
    
    if(arr[0] == key)
        return true;
    else {
        bool remainingPart = linearSearch(arr+1, size-1,key);
    return remainingPart;
    }


}


int main(){

    int arr[5] = {2,3,1,5,7};
    int size = 5;
    int key = 30;

    bool ans = linearSearch(arr, size, key);

    if(ans)
    cout<< "KEY is present in given array..." << endl;
    else
    cout<< "KEY is not present in the given array..." << endl;

    return 0;
}