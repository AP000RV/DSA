#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {34, 1, 13, 76, 35};
    cout << "Given array is: " << endl;
    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i] << " ";
    }

    // applying bubble sorting...
    cout << endl;
    int n = 5;
    cout << "Array after sorting: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}