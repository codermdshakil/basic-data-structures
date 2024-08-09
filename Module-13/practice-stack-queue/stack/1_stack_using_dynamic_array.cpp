#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;

    // push method
    void push(int val)
    {
        v.push_back(val);
    }

    // pop method
    void pop()
    {
        v.pop_back();
    }

    // top
    int top()
    {
        return v.back();
    }

    // size
    int size()
    {
        return v.size();
    }

    // empty
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

    myStack st;

    // take stack size input
    int n;
    cin >> n;

    // take stack elements inputs
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    // print stack elements [stack elements print in reverse way]
    for (int i = 0; i < n; i++)
    {
        if (st.empty() != true)
        {
            cout << st.top() << endl;
            st.pop();
        }
    }

    return 0;
}