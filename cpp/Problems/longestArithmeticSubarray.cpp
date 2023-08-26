// Google kickStart

// // QUESTION
/*
An arithmetic array is an array that contains at least two integers and the differences between consecutive integers are equal. For example, [9, 10], [3, 3, 3], and [9, 7, 5, 3] are arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are not arithmetic arrays.

Sarasvati has an array of N non-negative integers. The i-th integer of the array is Ą. She wants to choose a contiguous arithmetic subarray from her array that has the maximum length. Please help her to determine the length of the longest contiguous arithmetic subarray.



in short
we have to find the longest Subarray with the a common difference...
*/

#include <iostream>
using namespace std;

int main()
{
    // Taking input
    cout << "Enter n: ";
    int n;
    cin >> n;

    cout << "Enter array elements: ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = 2;
    int prevCommonDiff = arr[1] - arr[0];
    int j = 2; // 1 tk ka ho gya
    int currDiff = 2;

    while (j < n)
    {
        if (prevCommonDiff == arr[j] - arr[j - 1])
        {
            currDiff++;
        }
        else
        {
            prevCommonDiff = arr[j] - arr[j - 1];
            currDiff = 2;
        }
        ans = max(ans, currDiff);
        j++;
    }

    cout << ans << endl;

    return 0;
}

// Test Case
// Enter n: 7
// Enter array elements: 10 7 4 6 8 10 11
// o/p: 4