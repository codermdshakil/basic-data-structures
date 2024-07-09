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

void insert_head(Node *&head, Node *&tail, int val)
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
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insert_position(Node *&head, Node *&tail, int x, int v)
{
    if (x == 0)
    {
        insert_head(head, tail, v);
        return;
    }

    Node *newNode = new Node(v);
    Node *tmp = head;

    for (int i = 1; i < x; i++)
    {
        if (tmp == NULL)
            return; // Safety check
        tmp = tmp->next;
    }

    if (tmp == tail)
    {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = tmp->next;
        if (tmp->next)
        {
            tmp->next->prev = newNode;
        }
        tmp->next = newNode;
        newNode->prev = tmp;
    }
}

int size(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void print_normal(Node *head)
{
    Node *tmp = head;
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

    while (test--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            insert_head(head, tail, v);
            print_normal(head);
            print_reverse(tail);
        }
        else if (x > size(head))
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insert_position(head, tail, x, v);
            print_normal(head);
            print_reverse(tail);
        }
    }

    return 0;
}
