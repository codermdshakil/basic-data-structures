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

    // create dynamic node
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    // Node x = 10;
    // Node *x1 = new Node(10);
    // Node y = 20;
    // Node *x2 = new Node(10);

    // cout << x.next << endl; x - address
    // cout <<  x1  << endl; // x1 - address
    // cout <<  x1->val << endl; // x1 - val


    // linked
    ///// -- for these reason x1 is store address we just simple use  [head->next=a];
    // head->next = a;
    // a->next = b;
    // b->next = c;
    // c->next = d;

    // cout << head->val <<endl;
    // cout << a->val <<endl;
    // cout << b->val <<endl;
    // cout << c->val <<endl;
    // cout << d->val <<endl;

    return 0;
}