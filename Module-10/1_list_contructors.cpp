#include <bits/stdc++.h>
using namespace std;

int main()
{

    // 1. create a list
    // list <type> list_name;
    // list<int> myList;

    // 2. create a list with size
    // list<int> myList(5);

    // 3. create a list with size and inisial value
    // list <int> myList(10, 5);

    // 4. copy list2 to myList
    // list<int> list2 = {1, 2, 3, 4, 5};
    // list<int> myList(list2);

    // 5. copy array to myList
    // int ar[5] = {10, 20, 30, 40, 50};
    // list<int> myList(ar, ar + 5);

    // 6. copy vector to myList
    vector<int> v = {100, 200, 300, 400, 500};
    list<int> myList(v.begin(), v.end());

    // print linked
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << " ";
    }

    // print list shortcut way
    for (int c : myList)
    {
        cout << c << " ";
    }

    return 0;
}