#include <bits/stdc++.h>
using namespace std;

// create a node
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

// insert a tail function
void insert_a_tail(Node *&head, int val)
{
    // create a node
    Node *newNode = new Node(val);

    // if head equal to NULL exseption
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head; // don't play with head
    // find  tail
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // now temp is tail  and insert newNode to tail
    temp->next = newNode;
}

// create a function to print linked list
void print_linked_list(Node *head)
{
    cout << "Your Linked list: ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at tail" << endl;
        cout << "Option 2: Print linked list" << endl;
        cout << "Option 3: Terminate " << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please,Enter value: ";
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