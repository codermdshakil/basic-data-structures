#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;

    // push value in vector top
    void push(int val)
    {
        v.push_back(val);
    }

    // pop value from top
    void pop()
    {
        v.pop_back();
    }

    // access top
    int top()
    {
        return v.back();
    }

    // size
    int size()
    {
        v.size();
    }
    // Check true or false
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
   

    return 0;
}