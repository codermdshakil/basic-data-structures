#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    // create a constructor
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

// insert a tail function
void insert_a_tail(Node *&head, int val)
{
    // create a new node
    Node *newNode = new Node(val);

    // if head equal to null
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    // copy head to temp
    Node *tmp = head;
    // find tail
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tail equal to new node
    tmp->next = newNode;
}

// print linked list
void print_linked_list(Node *head)
{
    Node *tmp = head;
    cout << "Linked list : ";
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
    while (true)
    {
        cout << "Option 1: Insert a value tail" << endl;
        cout << "Option 2: Print Linked list " << endl;
        cout << "Option 3: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter value: ";
            int x;
            cin >> x;
            insert_a_tail(head, x);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            break;
        }
    }

    return 0;
}