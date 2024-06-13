#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cin >> n;

    // vector<string> v;

    // for (int i = 0; i < n; i++)
    // {
    //     string s;
    //     cin >> s;
    //     v.push_back(s);
    // }

    // for (string val : v)
    // {
    //     cout << val << endl;
    // }

    // without space get string

    // 3
    // shakil noyon nadim

    // int n;
    // cin >> n;
    // getchar();
    // vector<string> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << endl;
    // }

    // with space full line get string
    
    // 3
    // shakil ahmed
    // noyon rahman
    // nadim hassan

    int n;
    cin >> n;
    getchar();
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin, v[i]);
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << endl;
    // }

    for (string val : v)
    {
        cout << val << endl;
    }

    return 0;
}