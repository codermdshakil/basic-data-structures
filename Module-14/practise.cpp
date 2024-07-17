#include <bits/stdc++.h>
using namespace std;

class myQueue
{
public:
    list<int> v;

    // add value in back
    void push(int val)
    {
        v.push_back(val);
    }
    // remove value from front
    void pop()
    {
        v.pop_front();
    }

    // return top
    int top()
    {
        return v.front();
    }

    // size of queue
    int size()
    {
        return v.size();
    }

    // check queue true or false
    bool empty()
    {
        if (v.size() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    myQueue q;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    while (q.empty() != true)
    {
        cout << q.top() << endl; // print fast
        q.pop();                 // remove fast
    }

    return 0;
}