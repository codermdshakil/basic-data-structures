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
int print_linked_list(Node *head, int searchValue)
{
    int flag = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {

        if (tmp->val == searchValue)
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
        tmp = tmp->next;
    }
    return flag;
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
    int searchValue;
    cin >> searchValue;
    int flag = print_linked_list(head, searchValue);

    if (flag > 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

// Linear search - O(N) 
// sort          - O(NlongN)
// binary search - O(long N)
//-------------------------------
//                 -> O(NlongN) + O(longN)

// so best is -> O(N)
// O(longN) > O(N) If linked list is sorted assending order then we can use Binary search
 