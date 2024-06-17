#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    // create n size array
    long long ar[n];

    // take array input
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    // create a prefix sum array of n size
    long long pre[n];

    // first value assigned with array first value
    pre[0] = ar[0];

    // i =1 because if i = 0 and then pre[0] - pre[0-1] output will -1 then create problem for this reason i = 1
    for (int i = 1; i < n; i++)
    {
        // Prefix sum array input formula
        pre[i] = ar[i] + pre[i - 1];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        long long sum;

        if (l == 0)
        {
            // pre[r] -> r means 0 index to r index sum
            sum = pre[r] - 0;
            cout << sum << endl;
        }
        else
        {
            // pre[r] -> r means 0 index to r index sum
            // pre[l-1] -> l-1 means 0 index to before l index sum
            sum = pre[r] - pre[l - 1];
            cout << sum << endl;
        }
    }

    return 0;
}