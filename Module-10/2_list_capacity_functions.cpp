#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30, 40, 50};

    // myList.clear(); // clear all elements
    // cout << myList.size() << endl; // length

    myList.resize(2); // it will contain just 2 elements on listN
    // myList.resize(5, 100); after two size 3,4,5 size value is 100

    // check if myList is empty or not

    // if (myList.empty())
    // {
    //     cout << "YES" << endl;
    // }
    // else
    // {

    //     cout << "NO" << endl;
    // }

    for (int val : myList)
    {
        cout << val << " ";
    }

    return 0;
}

/**
 * Summary
 * size
 * resize
 * max_size
 * clear
 * empty
*/
