#include <bits/stdc++.h>
using namespace std;

// create doubly linked Node
class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    // create constructor
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

// delete at head
void delete_at_head(Node *&head, Node *&tail)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    if (head == NULL) // if head->next is NULL  [error handle]
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
}

// delete any position [without head, tail]
void delete_at_position(Node *head, int pos)
{

    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }

    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete deleteNode;
    return;
}

// delete at tail
void delete_at_tail(Node *&head, Node *&tail)
{
    Node *deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    if (tail == NULL) // if tail->next is NULL  [error handle]
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
}

// size of doubly linked list
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

// print normal way
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

// print reverse way
void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    // linked each others
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    int pos;
    cin >> pos;

    // Error handle
    if (pos >= size(head))
    {
        cout << "Invalid Index" << endl;
    }
    else if (pos < 0)
    {
        cout << "Invalid Index" << endl;
    }
    else if (pos == 0)
    {
        delete_at_head(head, tail);
    }
    else if (pos == size(head) - 1)
    {
        delete_at_tail(head, tail);
    }
    else
    {
        delete_at_position(head, pos);
    }

    print_normal(head);
    print_reverse(tail);

    return 0;
}