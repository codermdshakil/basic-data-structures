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

void insert_at_head(Node *&head, Node *&tail, int v)
{
    // create a new Node
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
    return;
}

// insert at tail
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    // create newNode
    Node *newNode = new Node(val);
    
    if (tail == NULL) // Handling empty list case
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

// delete head
void delete_head(Node *&head, Node *&tail)
{
    if (head == NULL) return; // Handling empty list case
    
    Node *delete_node = head;
    head = head->next;
    if (head == NULL) // If the list becomes empty, update tail
    {
        tail = NULL;
    }
    delete delete_node;
    return;
}

// delete a from pos
void delete_any_pos(Node *&head, Node *&tail, int pos)
{
    if (pos < 0) return; // Invalid position

    if (pos == 0)
    {
        delete_head(head, tail);
        return;
    }

    Node *tmp = head;
    for (int i = 1; i < pos; i++) // Changed loop to handle invalid position correctly
    {
        if (tmp == NULL || tmp->next == NULL) // error handle
        {
            return;
        }
        tmp = tmp->next;
    }

    if (tmp->next == NULL) // If there's no node at pos
    {
        return;
    }

    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    if (tmp->next == NULL) // If deleting the last element, update tail
    {
        tail = tmp;
    }
    delete deleteNode;
    return;
}

// print linked list
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
    return;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v; // Reading x and v together

        if (x == 0)
        {
            insert_at_head(head, tail, v);
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, v);
        }
        else if (x == 2)
        {
            if (v == 0)
            {
                delete_head(head, tail);
            }
            else
            {
                delete_any_pos(head, tail, v);
            }
        }
        print_linked_list(head);
    }

    return 0;
}
