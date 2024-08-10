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
    Node * head = NULL;
    Node * tail = NULL;

    // push method - push value to tail
    void push(int val)
    {
        // Create new node 
        Node * newNode =  new Node(val);
        if(head == NULL){
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
        l.pop_back();
    }

    // top
    int top()
    {
        return l.back();
    }

    // size
    int size()
    {
        return l.size();
    }

    // empty
    bool empty()
    {
        if (l.size() == 0)
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
     

    return 0;
}