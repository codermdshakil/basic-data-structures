#include <bits/stdc++.h>
using namespace std;

int main()
{

    // type 1 : inisialise vector
    // vector<int> v; type 1

    // type 2 : inisialise vector with size
    // vector<int> v(5); 

    // type 3 : inisialise vector with size and value 
    // vector<int> v(5, 2);

    // type 4 copy vector from another vector
    // vector<int> v2(5,100);
    // vector<int> v(v2); // v copy all value from v2 

    // type 5 copy vector from array 
    int ar[6] = {1,2,3,4,5,6};
    
    vector <int> v(ar, ar+6); // v copy all value from ar array 

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    cout << v.size() << endl;

    return 0;
}