#include <bits/stdc++.h>
using namespace std;

// stack using array library vector
class myStack
{
public:
    vector<int> v;

    // push to back -> O(1)
    void push(int val)
    {
        v.push_back(val);
    }

    // push from back -> O(1)
    void pop()
    {
        v.pop_back();
    }

    // access top element -> O(1)
    int top()
    {
        return v.back();
    }

    // size of stack -> O(1)
    int size()
    {
        return v.size();
    }

    // stack in empty or not
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
    // declare stack from main
    myStack st;

    // push value to top
    st.push(10);
    st.push(20);
    // access top
    // cout << st.top() << endl; // 20

    // remove top
    st.pop();
    // cout << st.top() << endl; // 10

    // Error handle
    if (st.empty() == false)
    { // that means you have value now we can call [top, pop]
    
    }

    return 0;
}