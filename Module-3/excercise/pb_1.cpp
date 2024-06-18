#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int x;
    cin >> x;

    int l = 0;
    int r = n - 1;

    bool flag = false;
    int count = 0;

    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (ar[mid] == x)
        {
            count++;
            if (count > 0)
            {
                flag = true;
            }
            break;
        }
        else if (x > ar[mid])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    if (flag == true)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}