#include <bits/stdc++.h>
using namespace std;

int main()
{

    set<int> s;
    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;
        s.insert(x); // O(logN)
    }

    //  print all sets value in assending sorted order
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }

    //  print all sets value in dessending sorted order [but we can't do this dessending order in set ]
    // vector<int> v;
    // for (auto it = s.begin(); it != s.end(); it++)
    // {
    //     // cout << *it << endl;
    //     v.push_back(*it);
    // }

    // // reverse vector
    // reverse(v.begin(), v.end());
    // for(int val:v){
    //     cout << val << " ";
    // }


    // if a specific value found in set then print yes otherwise no
    // if (s.count(10))
    // {
    //     cout << "Yes" << endl;
    // }
    // else
    // {
    //     cout << "No" << endl;
    // }

    return 0;
}