#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // cout << v.size() << endl;
    // cout << v.capacity() << endl;
    // cout << v.max_size() << endl;
    v.resize(20, 0);
    // for (int val : v)
    // {
    //     cout << val << " ";
    // }

    // cout << v.size() << endl;
    // cout << v.capacity()  << endl;
    v.clear();

    // if (v.empty())
    // {
    //     cout << "Vector is Empty" << endl;
    // }
    // else
    // {

    //     cout << "Vector Not is Empty" << endl;
    // }

    v.resize(10, 100);
    for (int val : v)
    {
        cout << val << " ";
    }
    return 0;
}