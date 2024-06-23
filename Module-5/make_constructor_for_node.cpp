#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    // create a constructor
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{

    Node a(10);
    Node b(20);

    // Linkded
    a.next = &b;

    // print value 
    cout << a.val << endl;
    cout << a.next->val << endl;

    return 0;
}