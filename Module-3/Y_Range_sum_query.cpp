#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, q;
    cin >> n >> q;
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    // query sum using while loop

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        int sum = 0;
        for (int j = l; j <= r; j++)
        {
            sum += ar[j];
        }

        cout << sum << endl;
    }

    // query sum using for loop
    // for (int i = 0; i < q; i++)
    // {
    //     int l, r;
    //     cin >> l >> r;
    //     int sum = 0;
    //     for (int j = l - 1; j <= r - 1; j++)
    //     {
    //         sum += ar[j];
    //     }
    //     cout << sum << endl;
    // }

    return 0;
}