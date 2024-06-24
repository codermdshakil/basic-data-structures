#include <bits/stdc++.h>
using namespace std;

class Node // একটা node class create করবো।
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

void insert_at_tail(Node *&head, int val) // reference সহ পয়েন্টার পাস করছি যাতে করে main এর head পয়েন্টার change হয়ে যায়
{

    Node *newNode = new Node(val); // নতুন একটি Node ক্রিয়েট করলাম

    // Important : Exception Handling
    if (head == NULL) // যদি লিঙ্কড লিস্ট খালি থাকে তবে এই নোড কে head বানিয়ে দিলাম
    {
        head = newNode;
        return; // যখন linked list এ  value থাকবেনা value দিয়ে return করে দিব।
    }

    Node *temp = head; // লুপের জন্য temp পয়েন্টার নিলাম

    while (temp->next != NULL) // যতক্ষন tail এ আসছি না , ততক্ষন লুপ চলবে
    {
        temp = temp->next; // প্রতি লুপে temp কে ডানে অর্থাৎ পরবর্তী Node এ shift করছি
    }

    temp->next = newNode; // tail এর next পয়েন্টার এ নতুন Node এর এড্রেস রেখে দিচ্ছি এবং এর মাধ্যমে Node টি লিঙ্কড লিস্টে এড হয়ে যাবে।
}

//  print linked list
void print_linked_list(Node *head)
{
    Node *temp = head;
    cout << "Linked list:";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at tail" << endl;
        cout << "Option 2: Print linked list" << endl;
        cout << "Option 3: Terminate " << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter value: ";
            int x;
            cin >> x;
            insert_at_tail(head, x);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            break;
        }
    }
}
