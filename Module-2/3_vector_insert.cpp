#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2 = {100, 101, 102, 103, 104};

    // insert a specific value on index 2
    // v.insert(v.begin() + 2, 10);

    // insert a vector all value after index 2
    v.insert(v.begin() + 2, v2.begin(), v2.end());

    for (int c : v)
    {
        cout << c << " ";
    }
    return 0;
}