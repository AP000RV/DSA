#include <bits/stdc++.h>

using namespace std;

int main()
{
    // armstrong number (153 == 1^3+5^3+3^3)

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;
    int number = n;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum += lastDigit*lastDigit*lastDigit;
        n = n/10;
    }

    if (sum == number)
        cout << "Number is an armstrong Number" << endl;
    else
        cout << "Number is not an armstrong number" << endl;

    return 0;

    // ---- ARMSTRONG NUMBER ----


}