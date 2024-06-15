#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int val = v[i] + 1;
        auto it = find(v.begin(), v.end(), val);

        if (it == v.end())
        {
        }
        else
        {

            count++;
        }
    }

    cout << count << endl;
    return 0;
}