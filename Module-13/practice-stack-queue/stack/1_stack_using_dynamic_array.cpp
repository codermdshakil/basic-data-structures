#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;

    // push value in vector top
    void push(int val) // O(1)
    {
        v.push_back(val);
    }

    // pop value from top
    void pop() // O(1)
    {
        v.pop_back();
    }

    // access top
    int top() // O(1)
    {
        return v.back();
    }

    // size
    int size() // O(1)
    {
        v.size();
    }
    // Check true or false
    bool empty() // O(1)
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

    // size of stack
    int n;
    cin >> n;

    // take input of stack elements
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    // prints stack elements 
    for (int i = 0; i < n; i++)
    {
        if (st.empty() != true)
        {
            cout << st.top() << endl;
            st.pop();
        }
    }
    // stack elements print in reverse way

    return 0;
}