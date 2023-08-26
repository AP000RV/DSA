        <<------------  For Finding The maximum continuous subArray  --------------->>


#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long maxSubarraySum(int arr[], int n){
        
       int maxSum = INT_MIN, currSum =0;
        
        for(int i=0; i<n; i++){
            currSum = max(arr[i], currSum+arr[i]);
            if(currSum > maxSum)
                maxSum = currSum;
        }
        return maxSum; 
    }
};


// driver Code

int main()
{
    int t,n;
    cout<<"Enter test case";
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        cout << " length of array: ";
        cin>>n; //input size of array
        
        int a[n];
        
        cout << "Enter Array elements: ";
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
    return 0;
}