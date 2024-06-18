
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // create a vector of long long
    vector<long long> ar(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> ar[i];  
    }

    // Create the prefix sum array
    vector<long long> pre(n);
    pre[0] = ar[0];
    for (int i = 1; i < n; ++i)
    {
        pre[i] = pre[i - 1] + ar[i];
    }

    // Print the prefix sum array in reverse order
    for (int i = n - 1; i >= 0; --i)
    {
        cout << pre[i] << " ";
    }
    cout << endl;

    return 0;
}
