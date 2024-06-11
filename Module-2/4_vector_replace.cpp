#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 2, 2, 3, 2, 2, 3, 4, 5, 6, 2};

    // replace 2 value to 100 start to end
    // replace(v.begin(), v.end(), 2, 100);

    //  replace value index 1 to 3 
    replace(v.begin(), v.begin()+ 3, 2, 100);

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}