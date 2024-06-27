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

// insert_at_tail
void insert_at_tail(Node *&head, int val)
{
    // newNode
    Node *newNode = new Node(val);

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

// print linked list
void print_linked_list(Node *&head)
{

    int count = 0;
    Node *temp = head;
    cout << "Linked list : ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
        count++;
    }
    cout << endl
         << "count - " << count << endl;
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

        insert_at_tail(head, val);
    }

    print_linked_list(head);

    return 0;
}