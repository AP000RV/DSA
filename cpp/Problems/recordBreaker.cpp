// #google kickStArt

// PROBLEM
/*
Isyana is given the number of visitors at her local theme park on N consecutive days. The number of visitors on the i-th day is V. A day is record breaking if it satisfies both of the following conditions:

• The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.

• Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following day.

Note that the very first day could be a record breaking day!

Please help Isyana find out the number of record breaking days.
*/

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n + 1];
    arr[n] = -1;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }

    int ans = 0;
    int maxi = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi && arr[i] > arr[i + 1])
        {
            ans++;
        }
        maxi = max(maxi, arr[i]);
    }
    cout << ans << endl;

    return 0;
}

// 8
// 1 2 0 7 2 0 2 2
// ans: 2 (value at index 1 and 3)