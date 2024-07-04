#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node(int val)
    {
        this->prev = NULL;
        this->val = val;
        this->next = NULL;
    }
};

// insert at any position
void insert_any_position(Node *head, int pos, int val)
{
    // create a new node
    Node *newNode = new Node(val);

    Node *tmp = head;

    // go before position
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
    return;
}

// doubly linked list size
int size(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

// insert at head in doubly linked list 
void insert_at_head(Node *&head, int val)
{
    // create new node
    Node *newNode = new Node(val);

    // if head equal to NULL
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

// print normal
void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
// print reverse
void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    // linked lists
    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = c;
    c->prev = b;

    int pos, val;
    cin >> pos >> val;

    if (pos == 0)
    {
        insert_at_head(head, val);
    }
    else if (pos >= size(head))
    {
        cout << "Invalid Index" << endl;
    }
    else
    {
        insert_any_position(head, pos, val);
    }

    print_normal(head);
    print_reverse(tail);

    return 0;
}