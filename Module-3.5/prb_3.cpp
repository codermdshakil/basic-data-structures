#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    // create an array of n size
    int ar[n];

    // take input of array
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    // sort array assending order
    sort(ar, ar + n);

    // while loop for run t times  decrement way
    while (t--)
    {
        // take input value
        int x;
        cin >> x;

        // create flag for if else
        bool flag = false;

        // binary search implementation
        int l = 0;
        int r = n - 1;

        while (l <= r)
        {
            int mid_index = (l + r) / 2;

            if (ar[mid_index] == x)
            {
                flag = true;
                break;
            }
            else if (x > ar[mid_index])
            {
                l = mid_index + 1;
            }
            else
            {

                r = mid_index - 1;
            }
        }

        // print output
        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}