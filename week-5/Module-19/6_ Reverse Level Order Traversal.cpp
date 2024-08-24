/************************************************************

    Following is the TreeNode class structure:

    template <typename T>

    class TreeNode {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include <bits/stdc++.h>

vector<int> reverseLevelOrder(TreeNode<int> *root) {

  vector<int> v;
  queue<TreeNode<int> *> q;

  if (root) {
    q.push(root);
  }

  while (!q.empty()) {
    // ber kora
    TreeNode<int> *p = q.front();
    q.pop();

    // kaj kora
    v.push_back(p->val);

    // childpush kora
    if (p->left)
      q.push(p->left);
    if (p->right)
      q.push(p->right);
  }

  reverse(v.begin(), v.end());

  return v;
}