#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    // create constructor
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node x(10), y(20);

    cout << x.val << " " << y.val;

    return 0;
}