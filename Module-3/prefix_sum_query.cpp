#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, q;
    cin >> n >> q;
    long long ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    // prefix sum array
    long long pre[n];
    pre[0] = ar[0];

    for (int i = 1; i < n; i++)
    {
        // prefix sum array take element formula 
        pre[i] = ar[i] + pre[i - 1];
    }

    while (q--)
    {
        // take l and r input and decrement 
        int l, r;
        cin >> l >> r;
        l--;
        r--;

        // inisialise a sum variable to store result 
        long long sum;

        if (l == 0)
        {
            // if l equal to 0 then 
            sum = pre[r];
            cout << sum << endl;
        }
        else
        {
            
            // if l not equal to 0 then 
            sum = pre[r] - pre[l-1] ;
            cout << sum << endl;
        }
    }

 
    return 0;
}