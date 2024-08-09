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
    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();

    // If stack is not empty
    if (st.empty() != true)
    {
        cout << st.top() << endl;
    }

    return 0;
}