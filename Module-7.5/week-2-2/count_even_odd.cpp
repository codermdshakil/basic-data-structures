#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next = NULL;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

// insert at tail
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    // create newNode
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

// print linked list
void print_linked_list(Node *head)
{
    int evenCount = 0;
    int oddCount = 0;

    Node *tmp = head;
    while (tmp != NULL)
    {
        if(tmp->val%2 == 0){
            evenCount++;
        }
        else{
            oddCount++;
        }
        tmp = tmp->next;
    }
    cout << "Evens: " << evenCount << " " << " Odds: " << oddCount<< endl;
    return;
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

        insert_at_tail(head, tail, val);
    }

    print_linked_list(head);

    return 0;
}