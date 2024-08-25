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

void print_level_nodes(Node *root, int search_level)
{

    queue<pair<Node *, int>> q;
    bool flag = false;

    if (root)
    {
        q.push({root, 0});
    }

    while (!q.empty())
    {

        //  ber kora ana
        pair<Node *, int> pr = q.front();
        Node *node = pr.first;
        int level = pr.second;

        q.pop();

        // kaj kora
        if (level == search_level)
        {
            cout << node->val << " ";
            flag = true;
        }

        // children push kora
        if (node->left)
        {
            q.push({node->left, level + 1});
        }
        if (node->right)
        {
            q.push({node->right, level + 1});
        }
    }

    if (!flag)
    {
        cout << "Invalid" << endl;
    }
}

int main()
{

    Node *root = input_binary_tree();
    int x;
    cin >> x;
    if (root)
    {
        print_level_nodes(root, x);
    }

    return 0;
}