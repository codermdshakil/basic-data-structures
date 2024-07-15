#include <iostream>
#include <string>
using namespace std;

// create doubly linked list
class Node
{
public:
    string address;
    Node *prev;
    Node *next;
    Node(string address)
    {
        this->address = address;
        this->prev = NULL;
        this->next = NULL;
    }
};

// browserhistory to track where is current
class BrowserHistory
{
public:
    Node *head;
    Node *tail;
    Node *current;

    BrowserHistory()
    {
        head = NULL;
        tail = NULL;
        current = NULL;
    }

    // insert at tail
    void insert_at_tail(string val)
    {
        Node *newNode = new Node(val);
        if (tail == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // visit when someone visit then call this visit function
    void visit(string url)
    {
        Node *temp = head;
        while (temp != NULL && temp->address != url)
        {
            temp = temp->next;
        }
        if (temp != NULL)
        {
            current = temp;
            cout << current->address << endl;
        }
        else
        {
            cout << "Not Available" << endl;
        }
    }

    // prev function to traverse prev
    void prev()
    {
        if (current != NULL && current->prev != NULL)
        {
            current = current->prev;
            cout << current->address << endl;
        }
        else
        {
            cout << "Not Available" << endl;
        }
    }

    // next function to traverse next
    void next()
    {
        if (current != NULL && current->next != NULL)
        {
            current = current->next;
            cout << current->address << endl;
        }
        else
        {
            cout << "Not Available" << endl;
        }
    }
};

int main()
{
    BrowserHistory history;

    string val;
    while (true)
    {
        cin >> val;
        if (val == "end")
        {
            break;
        }
        else
        {
            history.insert_at_tail(val);
        }
    }

    int t;
    cin >> t;

    string command, v;
    while (t--)
    {
        cin >> command;
        if (command == "visit")
        {
            cin >> v;
            history.visit(v);
        }
        else if (command == "prev")
        {
            history.prev();
        }
        else if (command == "next")
        {
            history.next();
        }
    }

    return 0;
}
