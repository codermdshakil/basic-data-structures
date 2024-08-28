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

// insert in bst function
void insert_in_bst(Node *&root, int x)
{
    // basecase
    if(root == NULL){
        root = new Node(x);
        return;
    }

    // logic
    if (x < root->val)
    {
        if (root->left == NULL)
        {
            root->left = new Node(x);
        }
        else
        {
            insert_in_bst(root->left, x);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = new Node(x);
        }
        else
        {
            insert_in_bst(root->right, x);
        }
    }
}

int main()
{

    Node *root = input_binary_tree();
 
    insert_in_bst(root, 13);
    insert_in_bst(root, 32);
    insert_in_bst(root, 22);
    insert_in_bst(root, 27);
    level_order(root);

    return 0;
}