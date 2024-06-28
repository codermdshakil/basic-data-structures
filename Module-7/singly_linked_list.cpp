#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    // create constructor
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{

    // Node a, b;
    // a.val = 10;
    // b.val = 20;

    // // linked
    // a.next = &b;
    // cout << a.val <<" " <<a.next->val << endl;

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    // linked list
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    cout << head->val << endl;
    cout << head->next->val << endl;
    cout << head->next->next->val << endl;
    cout << head->next->next->next->val << endl;
    cout << head->next->next->next->next->val << endl;
    return 0;
}