#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> l;

    // push method
    void push(int val)
    {
        l.push_back(val);
    }

    // pop method
    void pop()
    {
        l.pop_back();
    }

    // top
    int top()
    {
        return l.back();
    }

    // size
    int size()
    {
        return l.size();
    }

    // empty
    bool empty()
    {
        if (l.size() == 0)
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

    myStack st;
    
    // stack size
    int n;
    cin>>n;

    // stack elements input
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }

    // print stack elements
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    
    


    return 0;
}