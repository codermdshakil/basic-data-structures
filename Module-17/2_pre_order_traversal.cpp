#include <bits/stdc++.h>
using namespace std;

// create binary tree node
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// pre order traversal
void preorder(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    // create node using binary  tree node
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);

    // connection

    // level 0
    root->left = a;
    root->right = b;

    // level 1
    a->left = c;
    a->right = h;
    b->left = d;

    // Level 2
    c->right = e;
    h->left = i;
    d->left = f;
    d->right = g;

    // called preorder function
    preorder(root);

    return 0;
}