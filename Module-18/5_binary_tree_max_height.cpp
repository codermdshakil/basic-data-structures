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
        // ber kora
        Node *p = q.front();
        q.pop();

        // ja kaj ase sob aikhane
        int l, r;
        cin >> l >> r;

        Node *val_left;
        Node *val_right;

        if (l == -1)
        {
            val_left = NULL;
        }
        else
        {
            val_left = new Node(l);
        }
        if (r == -1)
        {
            val_right = NULL;
        }
        else
        {
            val_right = new Node(r);
        }

        // connections
        p->left = val_left;
        p->right = val_right;

        // childrens gulo print kora
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

// max height of binary tree
int maxHeight(Node *root)
{
    // Basecase
    if (root == NULL)
    {
        return 0;
    }

    int l = maxHeight(root->left);
    int r = maxHeight(root->right);

    // check which one if big then big + 1
    return max(l, r) + 1;
}

int main()
{
    Node *root = input_binary_tree();
    cout << maxHeight(root) << endl;

    return 0;
}
