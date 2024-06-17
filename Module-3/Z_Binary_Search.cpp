#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    sort(ar, ar+n);
    
    while (t--)
    {
        int x;
        cin >> x;
        bool flag = false;

        //leaner search

        // for (int i = 0; i < n; i++)
        // {
        //     if (ar[i] == x)
        //     {
        //         flag = true;
        //         break;
        //     }
        // }

        // binary search 
        




        // print output 
        if (flag)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}