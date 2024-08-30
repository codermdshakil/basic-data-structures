/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */

int level_order(TreeNode*  root, int low, int high) {
    // error handle
    if (root == NULL) {
        cout << "Tree nai" << endl;
        return 0;
    }
    int sum = 0;
    queue<TreeNode* > q;
    q.push(root);
    while (!q.empty()) {
        // 1. ber kore ana [fixed lagbe e]
        TreeNode*  f = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        if(f->val > low && f->val < high){
            sum += low + f->val + high;
        }

        // 3. tar children gulo ke push kore rakha [fixed lagbe e]
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return sum;
}

class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {

        int result = level_order(root, low, high);
        return result;
       
    }
};