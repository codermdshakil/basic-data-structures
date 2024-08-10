#include <bits/stdc++.h>
using namespace std;

// Create node

class Node
{
public:
    int val;
    Node *next;

    // constractor
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insertHead(Node * &head, int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}

void inertAtTail(Node * &head, int val){

    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }

    Node * tmp = head;
    // find tail
    while (tmp->next != NULL)
    {
        tmp->next;
    }
    tmp->next = newNode;
    

}

void print_list(Node * head){
    while (head != NULL)
    {
        cout << head->val << endl;
        head = head->next;
    }
    
}
int main()
{
    Node * head = NULL;

    while (true)
    {
        int x;
        cin>>x;
        if(x == -1){
            break;
        }
        inertAtTail(head, x);
    }

    print_list(head);

 

    return 0;
}