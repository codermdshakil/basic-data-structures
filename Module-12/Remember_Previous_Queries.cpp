#include <bits/stdc++.h>
using namespace std;

void print_normal(list<int> &myList)
{
    cout << "L -> ";
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void print_reverse(list<int> &myList)
{
    cout << "R -> ";
    for (auto it = myList.rbegin(); it != myList.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

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

int main()
{
    int t;
    cin >> t;

    list<int> myList;
    int x, v;

    while (t--)
    {
        cin >> x >> v;
        if (x == 0)
        {
            myList.push_front(v);
        }
        else if (x == 1)
        {
            myList.push_back(v);
        }
        else if (x == 2)
        {
            if (v >= 0 && v < myList.size())
            {
                 auto it = myList.begin();
                 advance(it, v);  
                 myList.erase(it); 
            }
        }
        print_normal(myList);
        print_reverse(myList);
    }

    return 0;
}