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

// Function to insert at tail
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

// Function to find index of x
int find_index(Node *head, int x)
{
    Node *tmp = head;
    int index = 0;
    while (tmp != NULL)
    {
        if (tmp->val == x)
        {
            return index;  
        }
        tmp = tmp->next;
        index++;
    }
    return -1; 
}

int main()
{
    int t;
    cin >> t;  
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int val;

        
        while (true)
        {
            cin >> val;
            if (val == -1)
                break;
            insert_at_tail(head, tail, val);
        }

        // take find value input
        int x;
        cin >> x;

        int result = find_index(head, x);
        // print x value index
        cout << result << endl;
    }
    return 0;
}
