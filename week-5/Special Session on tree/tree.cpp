#include <bits/stdc++.h>
using namespace std;

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

// Pre Order
void preOrder(Node *root)
{
    // basecase
    if (root == NULL)
    {
        return;
    }
    cout << root->val << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// Post Order
void postOrder(Node *root)
{
    // basecase
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->val << " ";
}


int main()
{
    // creating nodes
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);

    // connections
    a->left = b;
    a->right = c;

    b->left = d;
    c->right = e;

    // Pre Order x  
    // preOrder(a);

    // Post order
    postOrder(a);
    
    return 0;
}