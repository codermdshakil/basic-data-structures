#include <iostream>
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

// insert at head
void insert_at_head(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

// insert at tail 
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

// delete head

void delete_head(Node *&head, Node *&tail)
{
    if (head == NULL) return;
    Node *delete_node = head;
    head = head->next;
    if (head == NULL) // error handle
    {
        tail = NULL;
    }
    delete delete_node;
}
// delete any position
void delete_any_pos(Node *&head, Node *&tail, int pos)
{
    if (pos < 0 || head == NULL) return; // error handle

    if (pos == 0)
    {
        delete_head(head, tail);
        return;
    }

    Node *tmp = head;
    for (int i = 1; i < pos; i++)
    {
        if (tmp == NULL || tmp->next == NULL) return; // error handle
        tmp = tmp->next;
    }

    if (tmp->next == NULL) return; // error handle
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    if (tmp->next == NULL) 
    {
        tail = tmp;
    }
    delete deleteNode;
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
        cin >> x >> v;
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
