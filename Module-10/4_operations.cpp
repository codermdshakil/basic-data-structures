#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> myList = {10, 20, 30, 40, 50, 10, 60};

    // myList.remove(10); // it's remove all 10 from list
    // myList.sort(); // sort assending order
    // myList.sort(greater<int>()); // sort dessending order

    // myList.unique(); // remove duplicate value
    myList.reverse(); // reverse list

    for (int val : myList)
    {
        cout << val << " ";
    }
    return 0;
}