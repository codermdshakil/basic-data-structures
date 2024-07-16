#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> l;

    // push value to end  that means top
    void push(int val)
    {
        l.push_back(val);
    }

    // remove value from end  that means top
    void pop()
    {
        l.pop_back();
    }

    // access end value that means top
    int top()
    {
        return l.back();
    }

    // return l size
    int size()
    {
        return l.size();
    }

    // check if l is empty then true otherwise false
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

    int n;
    cin >> n;

    // take input of stack
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    // print stack
    while (st.empty() != true)
    {
        cout << st.top() << endl; // print top 
        st.pop(); // remove top
    }

    return 0;
}