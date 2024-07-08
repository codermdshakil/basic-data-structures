#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    // linked
    head->next = a;
    a->next = b;
    b->next = c;
    // make cycle linked 
    c->next = b;

    Node *slow = head;
    Node *fast = head;

    bool flag = false;
    while (fast != NULL && fast->next != NULL) // conditions to break the loop 
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        cout << "Cycle Detected" << endl;
    }
    else
    {

        cout << "No Cycle Detected" << endl;
    }

    return 0;
}