#include <bits/stdc++.h>
using namespace std;

//  Create singly linked list Node
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

// create queue using singly linked list
class my_queue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    // push
    void push(int val)
    {
        sz++;
        // create new Node
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

    // pop
    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;

        if (head == NULL)
        {
            tail = NULL;
        }
    }
    // front
    int front()
    {
        return head->val;
    }

    // size
    int size()
    {
        return sz;
    }
    // empty
    bool emtpy()
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

    my_queue q;

    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }

    while (q.emtpy() != true)
    {
        cout << q.front() << endl;
        q.pop();

    }

    return 0;
}