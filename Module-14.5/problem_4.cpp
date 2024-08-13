#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> my_queue;
    stack<int> queue_reverse;

    // my_queue size input
    int n;
    cin >> n;
    // take my_queue elements input
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        my_queue.push(val);
    }

    // reverse queue using stack
    while (!my_queue.empty())
    {
        int val = my_queue.front();
        queue_reverse.push(val);
        my_queue.pop();
    }

    // print queue reverse
    while (!queue_reverse.empty())
    {
        cout << queue_reverse.top() <<" ";
        queue_reverse.pop();
    }
    

    return 0;
}