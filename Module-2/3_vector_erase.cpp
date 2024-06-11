#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
    // delete a single element
    // v.erase(v.begin() + 2); // delete 3

    // delete a porsion index 3 to 5 
    v.erase(v.begin()+3, v.begin()+5); // delete 4,5

    // delete a specific index to end
    // v.erase(v.begin()+3, v.end()); // delete including index 3 to end

    for (int c : v)
    {
        cout << c << " ";
    }
    return 0;
}