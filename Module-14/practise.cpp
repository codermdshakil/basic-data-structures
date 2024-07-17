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

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << q.top() << endl;
    q.pop();
    cout << q.top() << endl;

    return 0;
}