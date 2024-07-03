#include <iostream>
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
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
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

// remove duplicates
void remove_duplicates(Node *&head)
{
    Node *tmp = head;
    // first loop
    while (tmp != NULL)
    {
        Node *second_tmp = tmp;
        //    second loop for check
        while (second_tmp->next != NULL)
        {
            // here using if check tmp and second tmp value 
            if (second_tmp->next->val == tmp->val)
            {
                Node *deleteNode = second_tmp->next;
                second_tmp->next = second_tmp->next->next;
                delete deleteNode;
            }
            else
            {

                second_tmp = second_tmp->next;
            }
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
    cout << endl;
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

    remove_duplicates(head);
    print_linked_list(head);

    return 0;
}
