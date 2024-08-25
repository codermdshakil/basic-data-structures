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

// input binary tree
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

        // kaj kora
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

        // connection
        p->left = val_left;
        p->right = val_right;

        // children push kora
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

// level order
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

        // children push kora
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
}

// print outer_right part
void print_outer_right(Node *root)
{
    if (root->right)
    {
        cout << root->right->val << " ";
        print_outer_right(root->right);
    }
    else if (root->left)
    {
        cout << root->left->val << " ";
        print_outer_right(root->left);
    }
}

vector<int> v;

// print outer_left part
void print_outer_left(Node *root)
{
    if (root->left)
    {
        v.push_back(root->left->val);
        print_outer_left(root->left);
    }
    else if (root->right)
    {
        v.push_back(root->right->val);
        print_outer_left(root->right);
    }
}

int main()
{

    Node *root = input_binary_tree();

    // left outer part
    if (root->left != NULL)
    {
        print_outer_left(root);
        // reverse v
        reverse(v.begin(), v.end());
        for (int x : v)
        {
            cout << x << " ";
        }
    }

    // root
    cout << root->val << " ";

    // right outer part
    if (root->right != NULL)
    {
        print_outer_right(root);
    }

    return 0;
}