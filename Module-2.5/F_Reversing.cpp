#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &vec)
{
    int start = 0;
    int end = vec.size() - 1;

    // using while loop reverse vector array
    while (start < end)
    {
        int tmp = vec[start];
        vec[start] = vec[end];
        vec[end] = tmp;
        start++;
        end--;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // reverse vector array
    reverseArray(arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}