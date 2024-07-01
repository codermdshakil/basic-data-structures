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

// print reverse way  using recursive function
void print_reverse(Node *N)
{

    // base case
    if (N == NULL)
    {
        return;
    }
    print_reverse(N->next);
    cout << N->val << " ";
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    // linked
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    
    // called print reverse function 
    print_reverse(head);

    return 0;
}