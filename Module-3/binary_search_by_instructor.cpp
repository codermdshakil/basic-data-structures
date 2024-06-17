#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int ar[n];

    // take array input of n size
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    // input finding value
    int x;
    cin >> x;

    // l means index 0
    int l = 0;
    // r means last index of array
    int r = n - 1;

    // flag to check yes or no
    bool flag = false;

    // if i smaller and equal_to r
    while (l <= r)
    {
        // find mid index formula
        int mid_index = (l + r) / 2;

        // if finding index with match x
        if (ar[mid_index] == x)
        {
            flag = true;
            break;
        }
        else if (ar[mid_index] < x) // if  x is greather then ar[mid_index]
        {
            // jane jaw
            l = mid_index + l;
        }
        else // if  x is smaller then ar[mid_index]
        {
            // bame jaw
            r = mid_index - l;
        }
    }

    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {

        cout << "NO" << endl;
    }

    return 0;
}