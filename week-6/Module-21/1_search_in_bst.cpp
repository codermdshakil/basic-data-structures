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

Node *input_binary_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }

    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }

    while (!q.empty())
    {
        // 1. ber kora
        Node *p = q.front();
        q.pop();

        // 2. sob kaj ai khane

        // 2.1 take value
        int l, r;
        cin >> l >> r;

        // 2.2 create node using input value
        Node *val_left;
        Node *val_right;

        // 2.3 error handle
        if (l == -1)
        {
            val_left = NULL;
        }
        else
        {
            val_left = new Node(l);
        }

        // 2.4 error handle
        if (r == -1)
        {
            val_right = NULL;
        }
        else
        {
            val_right = new Node(r);
        }

        // 2.5 connection left and right
        p->left = val_left;
        p->right = val_right;

        // 3. children push kora q te
        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }
    return root;
}

void level_order(Node *root)
{
    // error handle
    if (root == NULL)
    {
        cout << "Tree nai" << endl;
        return;
    }

    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ana [fixed lagbe e]
        Node *f = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        cout << f->val << " ";

        // 3. tar children gulo ke push kore rakha [fixed lagbe e]
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

// search funtion BST
bool search(Node *root, int x)
{

    // Base case
    if (root == NULL)
    {
        return false;
    }

    if (root->val == x)
        return true;

    if (x < root->val)
    {
        return search(root->left, x);
    }
    else
    {
        return search(root->right, x);
    }
}

int main()
{

    Node *root = input_binary_tree();
    if (search(root, 6))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}