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
        this->next = NULL;
    }
};

// insert at tail
void insert_tail(Node *&head, Node *&tail, int val)
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
        tail = tail->next;
    }
}

void delete_any_pos(Node *head1, Node *head2, int a, int b)
{
    Node *tmp1 = head1;
    for (int i = 1; i < a; i++)
    {
        tmp1 = tmp1->next;
    }

    Node *tmp2 = tmp1->next;
    for (int i = a; i <= b; i++)
    {
        tmp2 = tmp2->next;
    }
    // tmp one next connect to the list 2
    tmp1->next = head2;
    
    Node *tmp3 = head2;

    while (tmp3 != NULL)
    {
        tmp3 = tmp3->next;
    }

    tmp3->next = tmp2;
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

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        else
        {
            insert_tail(head1, tail1, val);
        }
    }

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        else
        {
            insert_tail(head2, tail2, val);
        }
    }

    int a, b;
    cin >> a >> b;

    delete_any_pos(head1, head2, a, b);
    print_normal(head1);

    return 0;
}