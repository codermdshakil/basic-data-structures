#include <bits/stdc++.h>
using namespace std;

int main()
{

    // take vector size input
    int n;
    cin >> n;

    // create a vector of int
    vector<int> arr(n);

    // take input of vector array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {

        if (arr[i] < 0)
        {
            // if number is negative then replace it 2
            replace(arr.begin(), arr.end(), arr[i], 2);
        }
        else if (arr[i] == 0)
        {
            // if number is == 0 then replace it 0
            replace(arr.begin(), arr.end(), arr[i], 0);
        }
        else
        {
            // if number is positive then replace it 1
            replace(arr.begin(), arr.end(), arr[i], 1);
        }
    }

    // print replace vector array 
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}