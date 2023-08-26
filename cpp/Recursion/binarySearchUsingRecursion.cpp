#include <iostream>

using namespace std;

/*bool isSorted(int arr[] , int size)
{
    if(size == 0 || size == 1)
    return true;

    if(arr[0] > arr[1])
    return false;
    else{
        bool remainingPart = isSorted(arr+1, size-1);
        return remainingPart;

    }
}
*/

// int sumArray(int arr[], int size){
    
//     //Base Case

//     if(size == 0)
//         return 0;
//     if(size == 1)
//         return arr[0];


//     int remainingPart = sumArray(arr+1,size-1);
//     int sum = arr[0] + remainingPart;
//     return sum;

// }


int main(){

    int arr[5] = {3,2,1,6,5};
    int size = 5;

    // bool ans = isSorted(arr, size);
    // if(ans)
    // cout << "Array is sorted... " << endl;
    // else
    // cout << "Array is not sorted... " << endl;

    //  //    <<<SECOND...>>>

    // int sum = sumArray(arr, size);
    // cout<< "Sum of the given Array is: " << sum;




}