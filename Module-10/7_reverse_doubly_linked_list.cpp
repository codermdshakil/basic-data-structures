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
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

// print doubly linked list normal way
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

// reverse using two pointers
void reverse(Node *head, Node *tail)
{

    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j)
    {
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
      swap(i->val, j->val);
}

// print doubly linked list reverse way using tail
// void print_reverse(Node *tail)
// {
//     Node *tmp = tail;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->prev;
//     }
// }

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d;

    // linked list
    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;
    
    b->next = c;
    c->prev = b;

    c->next = d;
    d->prev = c;
    
    // reverse function called 
    reverse(head, tail);

    print_normal(head);
    // print_reverse(tail);

    return 0;
}