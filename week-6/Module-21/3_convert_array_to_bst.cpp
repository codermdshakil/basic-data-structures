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

// convert array to bst
Node *convert_array_to_bst(int ar[], int n, int l, int r)
{
    // basecase
    if(l > r){
        return  NULL;
    }

    int mid = (l + r) / 2;
    Node *root = new Node(ar[mid]);
    Node *leftRoot = convert_array_to_bst(ar, n, l, mid - 1);
    Node *rightRoot = convert_array_to_bst(ar, n, mid + 1, r);
    
    // connection
    root->left = leftRoot;
    root->right = rightRoot;
}

int main()
{
    int n;
    cin >> n;
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    Node *root = convert_array_to_bst(ar, n, 0, n - 1);
    level_order(root);

    return 0;
}