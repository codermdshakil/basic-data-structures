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
        this->val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_binary_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == 1)
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

        // 2. all work here
        // creating node with new input value
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

        // 3. childrens push to q
        if (p->left)
        {
            q.push(p->left);
        }

        if (p->right)
        {
            q.push(p->right);
        }
    }
    // finally return root
    return root;
}

// node counting function
int count(Node *root)
{
    // basecase
    if (root == NULL)
    {
        return 0;
    }

    int l = count(root->left);
    int r = count(root->right);
    return l + r + 1;
}

int main()
{
    // take root
    Node *root = input_binary_tree();

    // called count counting function count
    cout << count(root) << endl;

    return 0;
}