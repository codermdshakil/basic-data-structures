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

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    int sz = 0;
    // push value in tail
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }

    // remove value from front
    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;

        if (head == NULL)
        {
            tail = NULL;
        }
    }

    // return front value
    int front()
    {
        return head->val;
    }

    // size of myQueue
    int size()
    {
        return sz;
    }

    // check queue empty or not
    bool empty()                                                                                                                                                                            
    {
        if (sz == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    myQueue q;

    // take input of myQueue 
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    
    // print myQueue 
    while (q.empty() != true)
    {
        cout << q.front() << endl;
        q.pop();
    }
    

    return 0;
}
