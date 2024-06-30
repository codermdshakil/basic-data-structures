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

void delete_at_pos(Node *head, int pos)
{
    Node *tmp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }

    Node *delete_node = tmp->next;
    tmp->next = tmp->next->next;
    cout << "Deleted Position " << pos << endl;
    delete delete_node;
    return;
}

// delete head - O(1)
void delete_head(Node *&head)
{
    Node * deleted_node = head;
    head = head->next;
    delete deleted_node;
}

// size of linked lista
int linked_list_size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        count++;
    }

    return count;
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

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    // linked
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    print_linked_list(head);

    int pos;
    cin >> pos;
    if (pos >= linked_list_size(head))
    {
        cout << "Invalid Index" << endl;
    }
    else if (pos == 0)
    {
        delete_head(head);
    }
    else
    {

        delete_at_pos(head, pos);
    }

    print_linked_list(head);
    return 0;
}