#include <bits/stdc++.h>
using namespace std;

// create double linked list Node using prev, val, next
class Node
{
public:
    Node *prev;
    int val;
    Node *next;
    Node(int val)
    {
        this->prev = NULL;
        this->val = val;
        this->next = NULL;
    }
};

// print double linked list normal
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

// print reverse way using tail and prev
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

    // create dynamic variable using Node
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = b;

    // linked with variables
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;

    print_normal(head);
    print_reverse(tail);

    return 0;
}