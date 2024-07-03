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

void delete_specific_value(Node *&head, int x)
{
    Node *tmp = head;

    // if head value equal to x value then change head to next
    if(head->val == x){
        Node * deleteNode = head ;
        head = head->next;
        delete deleteNode;
        return;
    }

    // otherwise check here 
    while (tmp->next != NULL)
    {
        if (tmp->next->val == x)
        {
            Node * deleteXNode = tmp->next;
            tmp->next = tmp->next->next;
            delete deleteXNode;
            break;
        }
        tmp = tmp->next;
    }
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

    int x;
    cin >> x;
    // find x and delete x value from linked list 
    delete_specific_value(head, x);

    // after all operation print linked list 
    print_linked_list(head);

    return 0;
}