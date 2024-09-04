#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testcase;
    cin >> testcase;
    for (int i = 0; i < testcase; i++)
    {
        set<int> s;
        int n;
        cin >> n;
        while (n--)
        {
            int x;
            cin >> x;
            s.insert(x);
        }

        // print all value of sets
        for (auto it = s.begin(); it != s.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}