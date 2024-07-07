#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30, 40, 50};

    // accces head value
    cout << myList.front() << endl;

    // accces tail value
    cout << myList.back() << endl;

    // access any position 
    cout << *next(myList.begin(), 3) << endl;
    return 0;
}