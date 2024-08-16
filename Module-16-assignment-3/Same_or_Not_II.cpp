#include <bits/stdc++.h>
using namespace std;

// Doubly Linked list Node
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Create custom Stack using Doubly Linked list
class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    // push method
    void push(int data)
    {
        sz++;
        // Create newNode using new data
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }

    // pop method
    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {

            tail->next = NULL;
        }
        delete deleteNode;
    }

    // top method
    int top()
    {
        return tail->val;
    }

    // size method
    int size()
    {
        return sz;
    }
    // empty method
    bool empty()
    {
        if (size() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
// Create custom Stack using Doubly Linked list
class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    // push method
    void push(int data)
    {
        sz++;
        // Create newNode using new data
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }

    // pop method
    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
            return;
        }
        head->prev = NULL;
    }

    // top method
    int front()
    {
        return head->val;
    }

    // size method
    int size()
    {
        return sz;
    }
    // empty method
    bool empty()
    {
        if (size() == 0)
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
    // declare costom 
    myStack my_stack;
    myQueue my_queue;
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