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

    int index_3 = 3;
    
    int sum = 0;

    for (int i = 0; i < index_3; i++)
    {
        sum += ar[i];
    }

    int sum1 = 0;

    for (int i = index_3 + 1; i < n; i++)
    {
        sum1 += ar[i];
    }

    if (sum == sum1)
    {
        cout << index_3 << endl;
    }

    return 0;
}