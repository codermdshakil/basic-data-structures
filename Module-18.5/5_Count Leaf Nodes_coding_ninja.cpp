/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };

***********************************************************/
int counting_leaf(BinaryTreeNode<int> *root) {
  if (root == 0) {
    return 0;
  }
  // check leaf

  if (root->left == NULL && root->left == NULL ){
      return 1;
  }
  else{
      int l = counting_leaf(root->left);
       int r = counting_leaf(root->right);
       return l + r;
  }
}
int noOfLeafNodes(BinaryTreeNode<int> *root) {
  int result = counting_leaf(root);
  return result;
}