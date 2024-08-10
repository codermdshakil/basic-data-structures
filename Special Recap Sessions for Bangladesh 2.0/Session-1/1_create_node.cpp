#include <bits/stdc++.h>
using namespace std;

// Create node

class Node
{
public:
    int val;
    Node *next;

    // constractor
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};


void print_list(Node * head){
    while (head != NULL)
    {
        cout << head->val << endl;
        head = head->next;
    }
    
}
int main()
{
    Node * head = NULL;
    Node * a = new Node(10);
    Node * b = new Node(20);
    Node * c = new Node(30);
    Node * d = new Node(40);

    // linked
    head = a;
    a->next = b;
    b->next = c;
    c->next = d;

    // print 
    // cout << head->val << endl;
    // cout << head->next->val << endl;
    // cout << head->next->next->val << endl;

    print_list(head);
    

    return 0;
}