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
        else
        {
            insert_tail(head, tail, val);
        }
    }

    list<int> myList;

    // copy value to myList
    while (head != NULL)
    {
        myList.push_back(head->val);
        head = head->next;
    }
    // sort myList
    myList.sort();
    // detele duplicate
    myList.unique();

    // print list to assending order
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}