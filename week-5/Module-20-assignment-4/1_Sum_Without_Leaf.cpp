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

// binary tree input
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

// print level order
void level_order(Node *root)
{
    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }

    while (!q.empty())
    {
        // ber kora
        Node *p = q.front();
        q.pop();

        // kaj kora
        cout << p->val << " ";

        // children push koa
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
}

int sumWithOutLeaf(Node *root)
{
    int sum = 0;

    // basecase
    if (root == NULL)
    {
        return 0;
    }
    // Logic
    if (root->left != NULL || root->right != NULL)
    {
        sum += root->val;
    }

    int l = sumWithOutLeaf(root->left);
    int r = sumWithOutLeaf(root->right);

    return sum + l + r;
}

int main()
{

    Node *root = input_binary_tree();
    // level_order(root);

    cout << sumWithOutLeaf(root) << endl;

    return 0;
}