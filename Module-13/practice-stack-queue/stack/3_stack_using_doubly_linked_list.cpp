#include <bits/stdc++.h>
using namespace std;

// doubly linked node
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

// stack using doubly linked list
class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    // push method - push value to tail
    // time complexity - O(1)
    void push(int val)
    {
        sz++;
        // Create new node
        Node *newNode = new Node(val);
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

    // pop method - delete tail
    // time complexity - O(1)
    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
        delete deleteNode;
    }

    // top method - access tail value
    int top()
    {
        return tail->val;
    }

    // size
    // time complexity - O(1)
    int size()
    {
        return sz;
    }

    // empty
    bool empty()
    {
        if (sz == 0)
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

    myStack st;

    // When you just want to access top but there is no value in stack
    if (!st.empty())
    {
        cout << st.top() << endl;
    }

    // // stack size
    // int n;
    // cin >> n;

    // // stack elements input
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     st.push(x);
    // }

    // // print stack elements
    // while (!st.empty())
    // {
    //     cout << st.top() << endl;
    //     st.pop();
    // }

    return 0;
}