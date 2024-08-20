// by myself
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

// preOrder 
void preOrder(Node *root)
{
    // base case
    if(root == NULL){
        return;
    }

    cout << root->val << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    // connections
    root->left = a;
    root->right = b;
    a->right = c;
    b->left = d;

    // preOrder function called 
    preOrder(root);


    return 0;
}