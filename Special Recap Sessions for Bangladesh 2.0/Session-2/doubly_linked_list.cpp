#include <bits/stdc++.h>
using namespace std;

// create doubly linked list Node
class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

// insert at head
void insertHead(Node *&head, Node *&tail, int val)
{
    // create new node using new value
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

// insert at tail
void insertTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        insertHead(head, tail, val);
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

// print linked list
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << endl;
        head = head->next;
    }
    cout << endl;
}


int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insertTail(head, tail, val);
    }

    printList(head);

    return 0;
}