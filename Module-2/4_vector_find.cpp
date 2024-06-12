#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 4, 2, 6, 5, 3, 7};

    // we need to create a  iterator or pointer
    // vector<int>::iterator it;
    // sortcut auto it but here it can't diteact

    auto it = find(v.begin(), v.end(), 5);


    // check iterator value that it found or not 
    if (it == v.end())
    {
        cout << "Not found " << endl;
    }
    else
    {
        cout << "found " << endl;
    }

    return 0;
}