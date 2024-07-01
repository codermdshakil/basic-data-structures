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

// print recursive way  using assending order
void print_recursive(Node *N)
{

    // base case
    if (N == NULL)
    {
        return;
    }
    cout << N->val << " ";
    print_recursive(N->next);
}

// print reverse way  using  dessending order
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

    // called print recursive and assending order
    print_recursive(head);
    cout << endl;
    // called print reverse or dessending order
    print_reverse(head);

    return 0;
}