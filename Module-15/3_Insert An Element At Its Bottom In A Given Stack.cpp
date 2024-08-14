#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    stack<int> newStack;

    // 1. st stack elements move in to newSt
    while (!myStack.empty())
    {
        newStack.push(myStack.top());
        myStack.pop();
    }
    // 2. push to top x value
    newStack.push(x);

    // 3. move newSt elements in to st
    while (!newStack.empty())
    {
        myStack.push(newStack.top());
        newStack.pop();
    }
    return myStack;

}
