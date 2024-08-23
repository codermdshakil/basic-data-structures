/************************************************************

    Following is the Binary Tree node structure
    
    template <typename T>
    
    class BinaryTreeNode
    {
        public:            
        T data;

        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

    };



*************************************************************/
bool level_order(BinaryTreeNode<int>*root, int x)
{

    // error handle
    if (root == NULL)
    {
        cout << "Tree nai" << endl;
        return false;
    }

    queue<BinaryTreeNode<int>*> q;
    q.push(root);

    bool flag = false;

    while (!q.empty())
    {
        // 1. ber kore ana [fixed lagbe e]
        BinaryTreeNode<int>* f = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        if (f->data == x)
        {
            flag = true;
            break;
        }
        else
        {
            flag = false;
        }

        // 3. tar children gulo ke push kore rakha [fixed lagbe e]
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }

    return flag;
}

bool isNodePresent(BinaryTreeNode<int> *root, int x) {
   bool result =  level_order(root, x);
   return result;

}