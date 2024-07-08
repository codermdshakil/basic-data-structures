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
        newNode->prev = tail;
        tail = tail->next;
    }
}

void print_normal(Node *head)
{
    Node *tmp = head;
    int mn = INT_MIN;
    while (tmp != NULL)
    {
        if (tmp->val > mn)
        {
            mn = tmp->val;
        }

        tmp = tmp->next;
    }
    cout << mn << endl;
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
    int val;

    list<int> myList;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        else
        {
            myList.push_back(val);
        }
    }
    // sort assending order 
    myList.sort();

    for (int val : myList)
    {
        cout << val << " ";
    }

    return 0;
}