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

// use global sz to count linked list size in O(1), Every interting time we count sz++ and every delete time we count sz--
int sz = 0;

void insertAtTail(Node *&head, int v)
{
    sz++;
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    tmp->next = newNode;
    newNode->prev = tmp;
}

// size  O(N)
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

// size  O(1)
int sizeOne(Node *head)
{
    // int cnt = 0;
    // while (head != NULL)
    // {
    //     cnt++;
    //     head = head->next;
    // }
    cout << sz << endl;
    return sz;
}

void printList(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main()
{

    Node *head = NULL;
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
            insertAtTail(head, val);
        }
    }

    // size count in - O(n)
    //  int listSize = size(head);
    //  cout << listSize << endl;
    // size count in - O(1)
    //  sizeOne(head);
    // printList(head);

    return 0;
}