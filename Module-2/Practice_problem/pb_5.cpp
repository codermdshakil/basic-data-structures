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

    int old_val, new_val;
    cin >> old_val >> new_val;

    // replaced old value to new value
    replace(v.begin(), v.end(), old_val, new_val);

    // print replaced values
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;
    int find_val;
    cin >> find_val;

    // find value and print it
    auto it = find(v.begin(), v.end(), find_val);

    cout << it - v.begin() << endl;

    return 0;
}