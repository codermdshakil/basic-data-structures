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

// insert value
void insert_at_tail(Node *&head, int val)
{
    // create new node with new value
    Node *newNode = new Node(val);

    // if head equal to null
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return;
}

// Insert at head
void insert_at_head(Node *&head, int val)
{
    // create a new node using new value
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
    return;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    cout << "Linked List: ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main()
{

    Node *head = NULL;

    while (1)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }

        // insert_at_tail(head, val);
        insert_at_head(head, val);
    }

    print_linked_list(head);

    return 0;
}