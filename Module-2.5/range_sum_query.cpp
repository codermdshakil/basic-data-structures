#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        int sum = 0;
        for (int j = l - 1; j <= r - 1; j++)
        {
            sum += arr[j];
        }
        cout << sum << endl;
    }

    return 0;
}