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

// insert at head
void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        return;
    }
}

// print linked list
void print_linked_list(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    cout << count << endl;
}
int main()
{

    Node *head = NULL;

    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, val);
    }
    print_linked_list(head);

    return 0;
}