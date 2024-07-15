#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

// insert at head in doubly linked list
void insert_at_head(Node *&head, Node *&tail, int val)
{
    // create new node
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

// insert at any position
void insert_any_position(Node *head, int pos, int val)
{
    // create a new node
    Node *newNode = new Node(val);

    Node *tmp = head;

    // go before position
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
    return;
}

// insert at tail
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }
}

int size(Node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}

void print_normal(Node *head)
{
    Node *tmp = head;
    cout << "L -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{
    Node *tmp = tail;
    cout << "R -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }

    cout << endl;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int test;
    cin >> test;

    int x, v;
    while (test--)
    {
        cin >> x >> v;

        if (x == 0)
        {
            insert_at_head(head, tail, v);
            print_normal(head);
            print_reverse(tail);
        }
        else if (x == size(head))
        {
            insert_at_tail(head, tail, v);
            print_normal(head);
            print_reverse(tail);
        }
        else if (x >= size(head))
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insert_any_position(head, x, v);
            print_normal(head);
            print_reverse(tail);
        }
    }

    return 0;
}