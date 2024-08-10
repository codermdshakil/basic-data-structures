#include <bits/stdc++.h>
using namespace std;

// doubly linked node
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

// stack using doubly linked list
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
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

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