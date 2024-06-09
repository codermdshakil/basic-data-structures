#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // logarithom complxity
    // while (n > 0) //o(logN)
    // {
    //     int digit = n % 10;
    //     cout << digit << endl;
    //     n / 10;
    // }

    // logarithom complxity

    for (int i = 1; i <= n; i = i * 2) // o(logN)
    {
        cout << i << endl;
    }

    return 0;
}