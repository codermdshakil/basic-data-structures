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

// In Order
void InOrder(Node *root)
{
    // basecase
    if (root == NULL)
    {
        return;
    }
    InOrder(root->left);
    cout << root->val << " ";
    InOrder(root->right);
}

// level order
void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // ber kora
        Node *f = q.front();
        q.pop();

        // kaj kora
        cout << f->val << " ";

        // children push to queue
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

// Count Node
int count_nodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int l = count_nodes(root->left);
    int r = count_nodes(root->right);

    return l + r + 1;
}

// Counting Leaf nodes
int count_leaf(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    else
    {
        int l = count_leaf(root->left);
        int r = count_leaf(root->right);
        return l + r;
    }
}

// Max Height
int maxHeight(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l, r) + 1;
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
    // postOrder(a);

    // In order
    // InOrder(a);

    // level Order
    // level_order(a);

    // cout << count_nodes(a) << endl;
    // cout << count_leaf(a) << endl;
    cout << maxHeight(a) << endl;

    return 0;
}