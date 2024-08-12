#include <bits/stdc++.h>
using namespace std;

//  Create singly linked list Node
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
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
   

};

int main()
{

    my_queue q;
    q.push(10);
    q.pop();


    return 0;
}