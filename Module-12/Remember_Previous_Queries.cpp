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

void print_normal(list<int> &myList)
{
    cout << "L -> ";
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void print_reverse(list<int> &myList)
{
    cout << "R -> ";
    for (auto it = myList.rbegin(); it != myList.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int t;
    cin >> t;

    list<int> myList;
    int x, v;

    while (t--)
    {
        cin >> x >> v;
        if (x == 0)
        {
            myList.push_front(v);
        }
        else if (x == 1)
        {
            myList.push_back(v);
        }
        else if (x == 2)
        {
            if (v >= 0 && v < myList.size())
            {

                auto it = myList.begin();
                advance(it, v);
                myList.erase(it);
            }
        }

        print_normal(myList);
        print_reverse(myList);
    }

    return 0;
}