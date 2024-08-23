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

void level_order(Node *root, int x = 6)
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

int main()
{

    Node *root = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(3);
    Node *c = new Node(6);

    // connections
    root->left = a;
    root->right = b;
    b->right = c;

    return 0;
}