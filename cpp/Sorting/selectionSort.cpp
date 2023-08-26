#include<iostream>
using namespace std;

int main(){

    int arr[5] = {34,1,13,76,35};
    cout<<"Given array is: " <<endl;
    for(int i=0;i<=4;i++){
        cout<<arr[i] << " ";
    }

    //applying selection sorting...
    cout<< endl;
    cout<< "Array after sorting: " << endl;
for(int i=0;i<5;i++)
{
    int minIndex = i;
    // cout << "minIndex: " << minIndex << endl;
    for(int j=i+1;j<5;j++)
    {
        if(arr[j] < arr[minIndex])
            minIndex = j;
    }
swap(arr[minIndex],arr[i]);
cout<< arr[i] << " ";
}
}