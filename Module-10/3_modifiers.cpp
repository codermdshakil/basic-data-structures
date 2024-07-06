#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> myList = {10, 20, 30, 40, 50};
    // list<int> newList;

    // 1. shortcut way to assign
    //  newList = myList;

    // 2. longcut way to assign
    // newList.assign(myList.begin(), myList.end());

    // insert head, tail
    //--------------------
    // myList.push_front(300); // insert at head
    // myList.push_back(100); // insert at tail
    // myList.push_back(200); // insert at tail

    // delete head, tail
    //--------------------
    // myList.pop_front(); // delete from head
    // myList.pop_back();  // delete from tail

    // insert any position
    //-------------------
    //  myList.insert(next(myList.begin(), 2), 200);

    // delete any position
    //---------------------
    myList.erase(next(myList.begin(), 2));

    for (int val : myList)
    {
        cout << val << " ";
    }

    return 0;
}