#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> myList = {10, 20, 30, 40, 30, 50, 60, 30, 70, 80};
    // list<int> newList = {600, 700, 800};

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
    // myList.insert(next(myList.begin(), 2), 200);

    // insert multiple value using insert function
    // myList.insert(next(myList.begin(), 2), {100,200,300});

    // insert a list in a myList
    // myList.insert(next(myList.begin(), 3), newList.begin(), newList.end());

    // delete any position
    //---------------------
    // myList.erase(next(myList.begin(), 2));
    // delete multiple value
    // myList.erase(next(myList.begin(), 2), next(myList.begin(), 5)); // it delete pos - 2-4

    // replace
    //--------
    // replace(myList.begin(), myList.end(), 30, 100);

    // find
    //------
    auto it = find(myList.begin(), myList.end(), 50);

    if (it == myList.end())
    {
        cout << "Not found" << endl;
    }
    else
    {

        cout << "found" << endl;
    }

    // for (int val : myList)
    // {
    //     cout << val << " ";
    // }

    return 0;
}