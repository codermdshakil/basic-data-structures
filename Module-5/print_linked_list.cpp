#include <bits/stdc++.h>
using namespace std;

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

int main()
{

    // dynamic object and value assign
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    // liked list
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    // print manually
    // cout << head->val << endl;
    // cout << head->next->val << endl;
    // cout << head->next->next->val << endl;
    // cout << head->next->next->next->val << endl;
    // cout << head->next->next->next->next->val << endl;

    // using loop print linked list
    // while (head != NULL)
    // {
    //     cout << head->val << endl;
    //     head = head->next;
    // }

    // using loop print linked list
    Node *temp = head; // temp cause othwewise we forget head
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }

    // temp = head; // using head we can again and again print and access linked value
    // while (temp != NULL)
    // {
    //     cout << temp->val << endl;
    //     temp = temp->next;
    // }

    return 0;
}