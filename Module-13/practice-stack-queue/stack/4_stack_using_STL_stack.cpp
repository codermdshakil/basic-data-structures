#include <bits/stdc++.h>
using namespace std;

int main()
{
    // declare my_stack using STL stack 
    stack<int> my_stack;

    // take size input
    int n;
    cin >> n;

    // input stack elements 
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        my_stack.push(x);
    }

    // when my_stack is not empty then just print stack elements
    while (!my_stack.empty())
    {
        cout << my_stack.top() << endl;
        my_stack.pop();
    }


    return 0;
}