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
    // create a new node
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        cout << endl
             << endl
             << "Inserted at Head" << endl
             << endl
             << endl;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    tmp->next = newNode;
    cout << endl
         << endl
         << "Inserted at tail" << endl
         << endl;
}

// insert at any position [without head]
void insert_any_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);

    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL) // error handle
        {
            cout << endl
                 << "Invalid Index" << endl
                 << endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl
         << endl
         << "Inserted at position " << pos << endl
         << endl;
}

// insert at head
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v); // নতুন Node বানালাম
    newNode->next = head;        // নতুন Node এর next এ বর্তমান head কে রেখে দিলাম
    head = newNode;              // বর্তমান head কে মুভ করে নতুন Node এ shift করলাম
    cout << endl
         << "Inserted at head" << endl
         << endl;
}

// delete at any position [without head]
void delete_from_position(Node *head, int pos)
{
    // 10 20 30 40 50
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL) // error handle
        {
            cout << endl
                 << "Invalid Index" << endl
                 << endl;
            return;
        }
    }

    if (temp->next == NULL) // error handle
    {
        cout << endl
             << "Invalid Index" << endl
             << endl;
        return;
    }
    // first stored deleted node
    Node *delel_node = temp->next;
    // before delete node and after delete node linked
    temp->next = temp->next->next;
    // now delete node using delete keyword
    delete delel_node;

    cout << endl
         << "Deleted Node Position " << pos << endl
         << endl;
}

// delete head
void delete_head(Node *&head)
{
    if (head == NULL)
    {
        cout << endl
             << "Head is not available" << endl
             << endl;
        return;
    }
    Node *delete_head = head; // Delete_node এ head কে স্টোর করে রাখলাম
    head = head->next;        // head এ head->next স্টোর করে রাখি
    delete delete_head;       // delete_node কে delete করে দিলাম
    cout << endl
         << "Deleted head" << endl
         << endl;
}

// print linked list
void print_link_list(Node *head)
{
    Node *tmp = head;
    cout << endl
         << "Linked List: ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}

int main()
{

    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at tail " << endl;         // done
        cout << "Option 2: Print linked List " << endl;      // done
        cout << "Option 3: Insert at any position " << endl; // done error handle
        cout << "Option 4: Insert at head " << endl;         // done
        cout << "Option 5: Delete at any position" << endl;  // done error  handle 2 times
        cout << "Option 6: Delete head" << endl;             // done error handle
        cout << "Option 7: Terminate " << endl;
        int op;
        cin >> op;

        if (op == 1)
        {
            cout << "Enter value: ";
            int x;
            cin >> x;
            insert_at_tail(head, x);
        }
        else if (op == 2)
        {
            print_link_list(head);
        }
        else if (op == 3)
        {
            cout << "Enter Position: ";
            int pos;
            cin >> pos;
            cout << "Enter value: ";
            int v;
            cin >> v;

            if (pos == 0)
            {
                insert_at_head(head, v);
            }
            else
            {
                insert_any_position(head, pos, v);
            }
        }
        else if (op == 4)
        {
            cout << "Enter value: ";
            int v;
            cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 5)
        {
            int pos;
            cout << "Enter Position: ";
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_position(head, pos);
            }
        }
        else if (op == 6)
        {
            delete_head(head);
        }
        else if (op == 7)
        {
            break;
        }
    }

    return 0;
}