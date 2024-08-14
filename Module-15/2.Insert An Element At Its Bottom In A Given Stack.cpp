#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    stack<int> newStack;

    // st stack elements move in to newSt
    while (!myStack.empty())
    {
        newStack.push(myStack.top());
        myStack.pop();
    }
    newStack.push(x);

    // move newSt elements in to st
    while (!newStack.empty())
    {
        myStack.push(newStack.top());
        newStack.pop();
    }
    return myStack;

}
