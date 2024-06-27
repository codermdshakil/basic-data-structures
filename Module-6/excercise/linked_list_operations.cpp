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
// insert at tail

void insert_at_tail(Node *&head, int v)
{
    // new Node
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        cout << endl
             << "Inserted at head" << endl
             << endl;
        return;
    }

    Node *temp = head;

    // find tail
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // tail next = newNode
    temp->next = newNode;
    cout << endl
         << endl
         << "Inserted at tail" << endl
         << endl;
}

// insert at head
void insert_at_head(Node *&head, int val)
{
    // new node
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "Insert at head " << endl
         << endl;
    return;
}

// insert at specific position
void insert_at_specific_position(Node *&head, int pos, int v)
{
    // create newNode
    Node *newNode = new Node(v);

    if (pos == 0)
    {
        insert_at_head(head, v);
        return;
    }

    Node *temp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next->next;
    temp->next = newNode;
    cout << endl
         << "Inserted at position " << pos << endl
         << endl;

    return;
}

// print linked list
void print_linked_list(Node *head)
{

    Node *temp = head;
    cout << endl
         << endl
         << "Linked list: ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}

int main()
{

    Node *head = NULL;

    while (true)
    {
        int op;
        cout << "Option 1: Insert at tail" << endl;
        cout << "Option 2: Print linked list" << endl;
        cout << "Option 3: Insert at head" << endl;
        cout << "Option 4: Insert at specific postion" << endl;
        cout << "Option 5: Terminate" << endl;
        cin >> op;
        if (op == 1)
        {
            int v;
            cout << "Enter value : ";
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            int v;
            cout << "Enter value : ";
            cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 4)
        {
            int pos, val;
            cout << endl
                 << "Enter Position : ";
            cin >> pos;
            cout << endl
                 << "Enter value : ";
            cin >> val;

            insert_at_specific_position(head, pos, val);
        }
        else if (op == 5)
        {
            break;
        }
    }

    return 0;
}