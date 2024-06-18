#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    // create prefix sum
    int pre[n];
    pre[0] = 0;
    pre[1] = ar[0] + pre[0];
 

    for (int i = 2; i < n ; i++)
    {
        pre[i] = ar[i-1] + pre[i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        cout << pre[i] << " ";
    }

    return 0;
}