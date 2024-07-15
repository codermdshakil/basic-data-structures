#include <bits/stdc++.h>
using namespace std;

int find_index(list<int> &lst, int value)
{
    auto it = find(lst.begin(), lst.end(), value);
    if (it != lst.end())
    {
        return distance(lst.begin(), it);
    }
    else
    {
        return -1; // Value not found
    }
}

void print_normal(list<int> &myList)
{
    cout << "L -> ";
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}


int main()
{
    list<int> myList = {10, 20, 30, 40, 50};

    // auto it = find(myList.begin(), myList.end(), 50);
    // cout << *it << endl;
    int result = find_index(myList, 20);
    myList.erase(next(myList.begin(), result));

    print_normal(myList);
    
    



    return 0;
}