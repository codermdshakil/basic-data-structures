#include <bits/stdc++.h> 
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> v;
void level_order(BinaryTreeNode<int> *root)
{
    // error handle
    if (root == 0)
    {
        return;
    }

    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ana [fixed lagbe e]
        BinaryTreeNode<int> *f = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        v.push_back(f->val);

        // 3. tar children gulo ke push kore rakha [fixed lagbe e]
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    v.clear();
    level_order(root);
    return v;
}