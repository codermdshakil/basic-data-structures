#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> val;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        val.insert(x);
    }

    // get second value of sets

    int n1 = 1;
    // Initializing iterator
    auto it = val.begin();
    it++;

    if (it != val.end())
    {
        cout << *it << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}