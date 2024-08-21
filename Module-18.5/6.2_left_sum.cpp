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

        // connections
        p->left = val_left;
        p->right = val_right;

        // children push
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

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
        cout << p->val << " ";

        // children push
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
}

long long leftSumHelper( Node * root, int isLeft){

	if(root == NULL)
	{
		return 0;
	}

	long long l = leftSumHelper(root->left, 1);
	long long r = leftSumHelper(root->right, 0);

    // check if left or not
	if(isLeft != 0)
	{
		return (l + r + long(root->val));
	}
	return (l + r);
}
 
 

int main()
{
    Node *root = input_binary_tree();
    level_order(root);
    cout << endl;
    cout << leftSumHelper(root->left, 1) << endl;

    return 0;
}