#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> x = {10, 20, 30, 40};
    vector<int> v = {1, 2, 3};

    // copy x value to v
    v = x;  // O(N)
    
    // push value to the end 
    // v.push_back(50);
    // remove value to the end 
    // v.pop_back();

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }



    return 0;
}