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

vector<int> v;

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
        if (p->left == NULL && p->right == NULL)
        {
            v.push_back(p->val);
        }

        // children push kora
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
}

int main()
{

    Node *root = input_binary_tree();
    level_order(root);

    // sort dessending order
    sort(v.begin(), v.end(), greater<int>());

    // print vector elements
    
    for (int c : v) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}