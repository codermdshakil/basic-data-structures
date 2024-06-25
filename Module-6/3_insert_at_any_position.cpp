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

// insert at any position without head position
void insert_any_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);

    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl
         << endl
         << "Inserted at position " << pos << endl
         << endl;
}
//------------------------------------------------
// from gitbook -- insert at any position function ||
//------------------------------------------------

// void insert_at_position(Node *&head, int index, int value)
// {

//     Node *newNode = new Node(value); // নতুন Node বানিয়ে নিলাম 

//     Node *temp = head; // temp পয়েন্টার এ head রেখে দিলাম 

//     for (int i = 1; i <= index - 1; i++)
//     {
//         temp = temp->next;
//     }
//     // এখানে temp এ যে index এ Node insert করতে হবে তার previous Node আছে
//     // temp->next এ আছে তার পরের Node 
//     newNode->next = temp->next; // New_node এর next পয়েন্টার এ  next_node কে রেখে দিলাম
//     temp->next = newNode; //Previous_Node এর next পয়েন্টার এ  new_node এর এড্রেস রেখে দিলাম
// }

// print linked list
void print_link_list(Node *head)
{
    Node *tmp = head;
    cout << endl
         << "Linked List: ";
    while (tmp != NULL)
    {
        cout << tmp->val <<" ";
        tmp = tmp->next;
    }
    cout << endl << endl;
}

int main()
{

    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at tail " <<endl;
        cout << "Option 2: Print linked List " <<endl;
        cout << "Option 3: Insert at any position " <<endl;
        cout << "Option 4: Terminate " <<endl;
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
            insert_any_position(head, pos, v);
        }
        else if (op == 4)
        {
            break;
        }
    }

    return 0;
}