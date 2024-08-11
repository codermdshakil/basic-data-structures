#include <bits/stdc++.h>
using namespace std;

class my_queue
{
public:
    list<int> l;

    // push
    void push(int val)
    {
        l.push_back(val);
    }

    // pop
    void pop()
    {
        l.pop_front();
    }

    // top
    int top()
    {
        return l.front();
    }

    // size
    int size()
    {
        return l.size();
    }

    // empty
    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    my_queue q;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    for (int i = 0; i < n; i++)
    {
        if (!q.empty())
        {
            cout << q.top() << endl;
            q.pop();
        }
    }

    return 0;
}