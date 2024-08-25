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

// count max height function
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

// count nodes function
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

// tree is perfact or not check function
bool is_perfect(Node *root)
{

    // height
    int height = maxHeight(root);
    // total nodes
    int total_nodes = count_nodes(root);

    // formula
    int expected_nodes = pow(2, height) - 1;
    return total_nodes == expected_nodes;
}

int main()
{
    // get root
    Node *root = input_binary_tree();

    // print result
    if (is_perfect(root))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}