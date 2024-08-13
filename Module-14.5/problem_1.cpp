#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> l;

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
        return l.empty();
    }
};

int main()
{
    myStack st1, st2;
    bool flag = false;
    int n1;
    cin >> n1;

    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }
    int n2;
    cin >> n2;

    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        st2.push(x);
    }

    while (!st1.empty() && !st2.empty())
    {

        if (n1 != n2)
        {
            flag = false;
            break;
        }
        else
        {
            if (st1.top() == st2.top())
            {
                flag = true;
            }
            else{
                flag = false;
                break;
            }
            st1.pop();
            st2.pop();
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {

        cout << "NO" << endl;
    }
    return 0;
}