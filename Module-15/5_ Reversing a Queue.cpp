#include <bits/stdc++.h> 
queue<int> reverseQueue(queue<int> q)
{
    stack<int> s;
    // 1. push q elements in to stack

    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }

    // 2. move stack elements to queue
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    return q;

}
