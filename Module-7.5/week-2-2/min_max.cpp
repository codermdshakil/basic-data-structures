#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next = NULL;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

// insert at tail
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    // create newNode
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

// print linked list
void print_linked_list(Node *head)
{

    int mn = INT_MAX;
    int mx = INT_MIN;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val < mn)
        {
            mn = tmp->val;
        }

        if (tmp->val > mx)
        {
            mx = tmp->val;
        }
        tmp = tmp->next;
    }

    cout << mn << " " << mx << endl;
    return;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }

        insert_at_tail(head, tail, val);
    }

    print_linked_list(head);

    return 0;
}