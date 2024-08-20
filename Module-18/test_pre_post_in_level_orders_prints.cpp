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
void preOrder(Node *root) // root -> left -> right
{
    // base case
    if (root == NULL)
    {
        return;
    }

    cout << root->val << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// postOrder
void postOrder(Node *root) // left -> right-> root
{
    // base case
    if (root == NULL)
    {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->val << " ";
}

// postOrder
void inOrder(Node *root) // left-> root -> right
{
    // base case
    if (root == NULL)
    {
        return;
    }

    inOrder(root->left);
    cout << root->val << " ";
    inOrder(root->right);
}

// level order
void levelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // 1. ber kore ana
        Node *f = q.front();
        q.pop();

        // 2. joto kaj ase kora
        cout << f->val << " ";

        // 3. f children gola push kora
        if(f->left != NULL){
            q.push(f->left);
        }
        if(f->right != NULL){
            q.push(f->right);
        }
    }
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
    // preOrder(root);

    // postOrder function called
    // postOrder(root);

    // in Order function called
    // inOrder(root);

    // level order function called
    levelOrder(root);

    return 0;
}