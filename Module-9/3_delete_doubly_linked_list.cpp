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
    // Node *head = new Node(10);
    // Node *a = new Node(20);
    // Node *b = new Node(30);
    // Node *c = new Node(40);
    // Node *tail = c;

    Node *head = NULL;
    Node *tail = NULL;

    // linked each others
    // head->next = a;
    // a->prev = head;
    // a->next = b;
    // b->prev = a;
    // b->next = c;
    // c->prev = b;

    delete_at_position(head, 2);

    print_normal(head);
    print_reverse(tail);

    return 0;
}