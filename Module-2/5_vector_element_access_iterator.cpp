#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 4, 5};
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << i << " - " << v[i] << endl;
    // }

    // cout << v[0] << endl; // 1
    // cout << v.at(0) << endl; // 1
    // cout << v.front() << endl; // first element 1
    // cout << v.back() << endl; // last element 5


    // Iterator 
    // vector<int>::iterator it;
    
    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}