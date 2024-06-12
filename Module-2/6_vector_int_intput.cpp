#include <bits/stdc++.h>
using namespace std;

int main()
{

    // type one to take input 
    // vector<int> v;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int val;
    //     cin>>val;
    //     v.push_back(val);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }

    // type two to take input  -- BEST way
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i <  n; i++)
    {
        cin>>v[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    
    

    return 0;
}