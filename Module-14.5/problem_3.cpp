#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> my_stack;
    stack<int> copy_stack;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        my_stack.push(x);
    }

    // copy mystack elements and inserted to copy stack
    while (!my_stack.empty())
    {
        int val = my_stack.top();
        copy_stack.push(val);
        my_stack.pop();
    }

    while (!copy_stack.empty())
    {
        cout << copy_stack.top() << " ";
        copy_stack.pop();
    }

    return 0;
}