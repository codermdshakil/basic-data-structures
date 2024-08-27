
class Solution {
public:
    bool checkTree(TreeNode* root) {
        int l = root->left->val;
        int r = root->right->val;
        int sum = l + r;

        if(root->val == sum){
            return true;
        }
        else{
            return false;
        }


    }
};