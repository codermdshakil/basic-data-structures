#include <iostream>
using namespace std;

// create a node . Node contain 2 value first it value, second is pointer
class Node
{
public:
    int val;
    Node *next;
};

int main()
{

    Node a, b, c, d, e;

    // assign value
    a.val = 10;
    // linked to b
    a.next = &b;

    // assign value
    b.val = 20;

    // linked to c
    b.next = &c;

    // assign value
    c.val = 30;

    // linked to d
    c.next = &d;

    // assign value
    d.val = 40;

    // linked to e
    d.next = &e;

    // assign value
    e.val = 50;
    e.next = NULL;

    // print value
    cout << a.val << endl;
    cout << a.next->val << endl;
    cout << a.next->next->val << endl;
    cout << a.next->next->next->val << endl;
    cout << a.next->next->next->next->val << endl;

    return 0;
}