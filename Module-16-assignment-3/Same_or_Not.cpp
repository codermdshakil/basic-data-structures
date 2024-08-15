#include <bits/stdc++.h>
using namespace std;

int main()
{
    // declare stack and queue
    stack<int> my_stack;
    queue<int> my_queue;
    bool flag = false;

    // take stack and queue size input
    int stack_size, queue_size;
    cin >> stack_size >> queue_size;

    // take my_stack elements input
    for (int i = 0; i < stack_size; i++)
    {
        int val;
        cin >> val;
        my_stack.push(val);
    }

    // take my_queue elements input
    for (int i = 0; i < queue_size; i++)
    {
        int val;
        cin >> val;
        my_queue.push(val);
    }

    // logic 
    while (!my_stack.empty() && !my_queue.empty())
    {
        if (stack_size != queue_size)
        {
            flag = false;
            break;
        }
        else
        {
            if (my_stack.top() != my_queue.front())
            {
                flag = false;
                break;
            }
            else
            {
                flag = true;
            }
            my_stack.pop();
            my_queue.pop();
        }
    }

    // print result's
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